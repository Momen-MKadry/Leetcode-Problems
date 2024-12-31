#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxOperations(vector<int> &nums, int k) {
    int i = 0, j = nums.size() - 1;
    int ways = 0;
    sort(nums.begin(), nums.end());

    while (i < j) {
      if (nums[i] > k)
        break;
      if (nums[j] >= k) {
        j--;
        continue;
      }

      if (k - nums[j] == nums[i]) {
        // cout << i << " " << j << endl;
        // cout << nums[j] << " " << nums[i] << endl;
        ways++;
        i++;
        j--;
      } else if (k - nums[j] > nums[i]) {
        i++;
      } else {
        j--;
      }
    }
    return ways;
  }
};
