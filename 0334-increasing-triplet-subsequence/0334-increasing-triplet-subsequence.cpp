#define ll long long

class Solution {
public:
  bool increasingTriplet(vector<int> &nums) {
    vector<int> minBeforeI(nums.size());
    vector<int> maxAfterI(nums.size());
    ll min = INT_MAX;
    ll max = INT_MIN;

    for (ll i = 0; i < nums.size(); i++) {
      if (nums[i] < min) {
        min = nums[i];
        minBeforeI[i] = nums[i];
      }
      minBeforeI[i] = min;
    }
    for (ll i = nums.size() - 1; i >= 0; i--) {
      if (nums[i] > max) {
        max = nums[i];
        maxAfterI[i] = nums[i];
      }
      maxAfterI[i] = max;
    }

    for (ll i = 0; i < nums.size(); i++) {
      if (minBeforeI[i] != nums[i] && maxAfterI[i] != nums[i]) {
        return true;
      }
    }

    // for (int i = 0; i < maxAfterI.size(); i++) {
    //   cout << maxAfterI[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < minBeforeI.size(); i++) {
    //   cout << minBeforeI[i] << " ";
    // }
    // cout << endl;

    return false;
  }
};
