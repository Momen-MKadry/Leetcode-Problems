class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans;
        vector<bool> prime(right + 1, 1);
        prime[0] = 0; prime[1] = 0;
        vector<int> primeValues;
        for (int i = 2; i * i <= right; ++i) {
            if (prime[i]) {
                for (int j = i * i; j <= right; j += i)
                    prime[j] = false;
            }
        }

        for (int i = left; i <= right; ++i) {
            if (prime[i] && i >= left)
                primeValues.push_back(i);
        }
        if (primeValues.size() < 2)
            return vector<int>{-1, -1};
        int min = INT_MAX;
        for (int i = 1; i < primeValues.size(); ++i) {
            if (primeValues[i] - primeValues[i - 1] < 2) {
                ans.clear();
                ans.push_back(primeValues[i - 1]);
                ans.push_back(primeValues[i]);
            }
            if (primeValues[i] - primeValues[i - 1] < min) {
                min = primeValues[i] - primeValues[i - 1];
                ans.clear();
                ans.push_back(primeValues[i - 1]);
                ans.push_back(primeValues[i]);
            }
        }

        if (ans.size() < 2) {
            ans.clear();
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;
    }
};