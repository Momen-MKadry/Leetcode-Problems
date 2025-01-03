class Solution {
public:
  int minStartValue(vector<int> &nums) {
    int minElement = 101, n = nums.size(), current = 0;

    for (int i = 0; i < n; i++) {
      current += nums[i];
      minElement = min(minElement, current);
    }
    if (minElement < 0)
      return (minElement * -1) + 1;
    else
      return 1;
  }
};
