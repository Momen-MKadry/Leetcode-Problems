public class Solution {
    public int SumIndicesWithKSetBits(IList<int> nums, int k)
    {
        int result = 0;
        for (int i = 0; i < nums.Count; i++)
        {
            int num = nums[i];
            int oneCount = 0;
            IList<int> binary = new List<int>();
            int remainder = 0;
            while (num > 0)
            {
                remainder = num % 2;
                if (remainder == 1)
                {
                    binary.Add(1);
                    oneCount++;
                }
                else binary.Add(0);

                num = num / 2;
            }
            if(oneCount == k) result += nums[i];
        }

        return result;
    }
}