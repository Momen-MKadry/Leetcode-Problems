#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isSubsequence(string s, string t) {
    if(t.size() == 0 && s.size() == 0)
        return true;
    if(s.size() == 0)
        return true;
    if(t.size() == 0)
        return false;
    
    int cnt = s.size() - 1;
    for (int i = t.size() - 1; i >= 0; i--) {
      if (t[i] == s[cnt]) {
        cout << t[i] << " "<< s[cnt] << " " << cnt << endl;
        s.pop_back();
        cnt--;
      }
    }

    if (!cnt)
      return true;
    else
      return false;
  }
};
