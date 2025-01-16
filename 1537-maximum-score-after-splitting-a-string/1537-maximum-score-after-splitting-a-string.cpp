class Solution {
public:
    int maxScore(string s) {
        int maxVal = -1, one = 0, left = 0;
        for(char ch : s) {
            if(ch == '1')
                one++;
        }
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == '0')
                left++;
            else one--;

            maxVal = max(maxVal, left + one);
            //cout << maxVal << endl;
        }
        return maxVal;
    }
};