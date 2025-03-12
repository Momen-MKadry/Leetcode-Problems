class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p = 0, n = 0;
        for(auto i : nums) {
            if(i < 0) ++n;
            if(i > 0) ++p;
        }
        return max(n, p);
    }
};