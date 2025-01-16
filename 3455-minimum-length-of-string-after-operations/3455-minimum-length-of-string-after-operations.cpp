class Solution {
public:
    int minimumLength(string s) {
        if(s.length() <= 2)
            return s.length();
        
        int freq[26];
        int cnt = 0;

        for(auto ch : s) {
            ++freq[ch -'a'];
        }

        for(auto i : freq) {
            if(i > 2){
                if(i % 2)
                    cnt += (i - 1);
                else cnt += (i - 2);
            }
        }
        return s.length() - cnt;
    }
};