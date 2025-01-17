class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> nums;
        set<int> uniqueFreq;
        unordered_map<int, int> freq;

        for(auto i : arr) {
            nums.insert(i);
            ++freq[i];
        }
        for(auto i : freq) {
            uniqueFreq.insert(i.second);
        }

        return (nums.size() == uniqueFreq.size());
    }
};