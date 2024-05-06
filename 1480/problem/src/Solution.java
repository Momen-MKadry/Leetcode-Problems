class Solution {
    public int[] runningSum(int[] nums) {

        int size = nums.length;
        int cnt = 0;

        for(int i = 0; i < size; i++)
        {
            int tmp = cnt;
            cnt += nums[i];
            nums[i] += tmp;

        }
        return nums;
    }
}