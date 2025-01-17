class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> uniqueFreq;
        unordered_map<int, int> freq;

        for(auto i : arr) 
            ++freq[i];

        for(auto i : freq) {
            if(uniqueFreq.contains(i.second))
                return false;
            uniqueFreq.insert(i.second);
        }

        return true;
    }
};