class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size(), ans = 0;
        int min = INT_MAX;
        for (int i = 0; i < n - k + 1; ++i) {
            ans = 0;
            for (int j = i; j < i + k; ++j) {
                if (blocks[j] == 'W')
                    ++ans;
            }
            if (ans < min)
                min = ans;
        }
        return min;
    }
};