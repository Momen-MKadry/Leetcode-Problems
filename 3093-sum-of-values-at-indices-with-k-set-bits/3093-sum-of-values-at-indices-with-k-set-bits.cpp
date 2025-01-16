class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            int curr = i;
            int currOnes = 0;
            while(curr) {
                curr = curr & (curr - 1);
                ++currOnes;
                if(currOnes > k)
                    break;
            }
            if(currOnes == k) {
                sum += nums[i];
            }
        }
        return sum;
    }
};