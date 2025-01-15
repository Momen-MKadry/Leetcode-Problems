public class Solution {
    public int SumIndicesWithKSetBits(IList<int> nums, int k)
    {
        int result = 0;
        for (int i = 0; i < nums.Count; i++)
        {
            int currIndex = i;
            int count = 0;
            while (currIndex > 0)
            {
                currIndex = currIndex & (currIndex - 1);
                ++count;

                if(count > k)
                    break;              
            }
            if(count == k)
                result += nums[i];
        }

        return result;
    }
}

