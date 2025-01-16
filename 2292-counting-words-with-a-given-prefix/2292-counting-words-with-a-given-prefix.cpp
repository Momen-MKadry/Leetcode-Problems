class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(string s : words) {
            if(s.starts_with(pref))
                ++cnt;
        }
        return cnt;
    }
};