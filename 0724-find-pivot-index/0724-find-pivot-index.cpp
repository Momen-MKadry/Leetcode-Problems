class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int arrSum = 0, currSum = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            arrSum += nums[i];
        }

        for (int i = 0; i < n; i++) {
            currSum += nums[i];
            
            if ((currSum - nums[i]) == (arrSum - currSum))
                return i;
        }
        return -1;
    }
};