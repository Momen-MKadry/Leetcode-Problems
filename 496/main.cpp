#include <vector>

using namespace std;

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++) {
      int curr = nums1[i];
      int max = curr;

      for (int j = 0; j < nums2.size(); j++) {
        if (curr == nums2.back())
          break;
        else {
          if (nums2[j] == curr)
            max = nums2[j];
          if (nums2[j] > max)
            max = nums2[j];
        }
      }
      if (max > curr)
        result.push_back(max);
      else
        result.push_back(-1);
    }
    return result;
  }
};
