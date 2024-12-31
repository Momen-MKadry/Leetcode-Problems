#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    if (nums.size() == 1) {
      return;
    }
    int i = 0, j = 0;
    while (j < nums.size()) {
      if (nums[j] == 0)
        j++;

      cout << i << " " << j << endl;
      if ((i == 0 && j == 0) || ((i >= nums.size()) || (j >= nums.size())))
        break;
      cout << j << endl;
      if (nums[i] == 0 && nums[j] != 0 && i < j) {
        nums[i] = nums[j];
        nums[j] = 0;
        i++;
        j++;
      }
    }
  }
};

int main() {
  vector<int> v = {1, 0, 1};
  Solution s;
  s.moveZeroes(v);
  for (int n : v) {
    cout << n << " ";
  }
}
