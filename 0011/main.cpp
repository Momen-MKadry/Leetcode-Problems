#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxArea(vector<int> &height) {
    int i = 0, j = height.size() - 1, area = 0;

    // cout << area << endl;

    while (i < j) {
      area = max(area, (j - i) * min(height[i], height[j]));

      //   cout << "I: " << i << " J: " << j << "\n"<< "---- ";
      //   cout << "\nJ-I: " << (j-i) << " MIN: " << min(height[i], height[j])
      //   << " ____\n "; cout << " ######## " << endl;
      if (height[i] <= height[j])
        i++;
      else
        j--;
    }
    return area;
  }
};

