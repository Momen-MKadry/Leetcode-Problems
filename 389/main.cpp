#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  char findTheDifference(string s, string t) {
    int sASCII = 0;
    int tASCII = 0;

    for(int i = 0; i < s.size(); i++) {
      sASCII += s[i];
    }

    for (int i = 0; i < t.size(); i++) {
      tASCII += t[i];
    }

    char result = (char) (tASCII - sASCII);
    return result;
  }
};
