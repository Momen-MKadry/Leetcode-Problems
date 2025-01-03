class Solution {
public:
  int waysToSplitArray(vector<int> &nums) {
    int n = nums.size();
    long long sum = 0, currSum = 0;
    int ways = 0;

    for (int i = 0; i < n; i++) {
      sum += nums[i];
    }

    for (int i = 0; i < n - 1; i++) {
      currSum += nums[i];
      if (currSum >= sum - currSum)
        ways++;
    }
    return ways;
  }
};
