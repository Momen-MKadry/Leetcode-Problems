
class Solution {
public:
  string makeGood(string s) {
    stack<char> result;
    for (int i = 0; i < s.length(); i++) {
      if (!result.empty() &&
          (s[i] - result.top() == 32 || s[i] - result.top() == -32)) {
        result.pop();
      } else {
        result.push(s[i]);
      }
    }

    stack<char> tmp;
    string res = "";
    while (!result.empty()) {
      char ch = result.top();
      result.pop();
      tmp.push(ch);
    }

    while (!tmp.empty()) {
      res += tmp.top();
      tmp.pop();
    }
    return res;
  }
};