class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, firstZeroIdx = -1, finalRes = 0, n = nums.size();
        if(n == 1){
            if(k > 0)
                return 1;
            else {
                if(nums[0])
                    return 1;
                else return 0;
            }
        }
        int currK = k;
        while(r < n) {
            
            if(nums[r]) {
                r++;
                
            } else if(!nums[r]) {
                if(firstZeroIdx == -1)
                    firstZeroIdx = r;
                if(currK > 0) {
                    currK--;
                    r++;
                    
                } else {
     
                    l = firstZeroIdx + 1;
                    r = firstZeroIdx + 1;
                    currK = k;
                    firstZeroIdx = -1;
                }
            }
        finalRes = max(finalRes, r - l);
        }
        return finalRes;
    }
};