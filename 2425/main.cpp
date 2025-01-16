class Solution {
public:
  int xorAllNums(vector<int> &nums1, vector<int> &nums2) {

    if (nums1.size() % 2 == 0 && nums2.size() % 2 == 0) {
      return 0;
    }
    if (nums1.size() % 2 == 0) {
      int xord = 0;
      for (int i = 0; i < nums1.size(); ++i)
        xord ^= nums1[i];
      return xord;
    }
    if (nums2.size() % 2 == 0) {
      int xord = 0;
      for (int i = 0; i < nums2.size(); ++i)
        xord ^= nums2[i];
      return xord;
    }

    int xord = 0;

    for (int i = 0; i < nums1.size(); ++i) {
      xord ^= nums1[i];
    }

    for (int i = 0; i < nums2.size(); ++i) {
      xord ^= nums2[i];
    }

    return xord;
  }
};
