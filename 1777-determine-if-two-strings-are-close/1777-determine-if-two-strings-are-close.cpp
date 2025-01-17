class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length())
            return false;
        
        set<char> w1;
        for(auto i : word1)
            w1.insert(i);
        for(auto i : word2)
            if(!(w1.contains(i)))
                return false;
        
        vector<int> f1(26, 0);
        vector<int> f2(26, 0);

        for(auto i : word1)
            ++f1[i - 'a'];
        for(auto i : word2)
            ++f2[i - 'a'];
        
        sort(f1.begin(), f1.end());
        sort(f2.begin(), f2.end());
        
        return (f1 == f2);
    }
};