class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, res = 0, n = nums.size(), zeros = 0;
        
        for(int i = 0; i < n; i++){
            zeros += (nums[i] == 0);

            while(zeros > 1){
                zeros -= (nums[l] == 0);
                l++;
            }
            res = max(res, i - l);
        }

        return res;
    }
};