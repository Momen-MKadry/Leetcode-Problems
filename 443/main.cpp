#include <bits/stdc++.h>
#include <iterator>
#include <string>

using namespace std;

#define ll long long

class Solution {
public:
  int compress(vector<char> &chars) {
    if (chars.size() == 1)
      return 1;

    int cnt = 1;
    char current = chars[0];
    string s = "";
    for (int i = 0; i < chars.size(); i++) {
      if (i == chars.size() - 1) {
        if (chars[i] == current) {
          s += chars[i];
          if (cnt > 1)
            s.append(to_string(cnt));
        } else {
          s += current;
          if (cnt > 1)
            s.append(to_string(cnt));
          s += chars[i];
        }
      } else {
        if (chars[i + 1] == current) {
          cout << chars[i + 1] << " " << current << endl;
          cnt++;
        } else {
          current = chars[i + 1];
          s += chars[i];
          if (cnt > 1)
            s.append(to_string(cnt));
          cnt = 1;
        }
      }
      cout << s << endl;
    }
    chars.clear();
    for (int i = 0; i < s.size(); i++) {
      chars.push_back(s[i]);
    }
    return s.size();
  }
};

int main() {
  vector<char> ch{'a', 'a', 'b', 'b', 'c', 'c', 'c'}; // a2b2c3
  Solution s;
  cout << s.compress(ch) << endl;
}
