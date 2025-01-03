class Solution {
public:
  int largestAltitude(vector<int> &gain) {
    int maximum = INT_MIN, pre = 0;
    for (int i = 0; i < gain.size(); i++) {
      pre += gain[i];
      if (pre > maximum) {
        maximum = pre;
      }
    }
    return max(maximum, 0);
  }
};
