#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    if (nums.size() == 1) {
      return;
    }
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] == 0 && nums[j] != 0) {
          // cout << i << " - " <<  nums[i] << " j -  "<< nums[j] << endl;
          nums[i] = nums[j];
          nums[j] = 0;
        }
      }
    }
  }
};
