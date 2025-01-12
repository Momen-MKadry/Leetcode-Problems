class Solution {
public:
  bool canConstruct(string s, int k) {
    if (s.length() < k)
      return false;
    if (s.length() == k)
      return true;

    unordered_map<char, int> freq;
    int oddCnt = 0;

    for (auto ch : s) {
      ++freq[ch];
    }

    for (auto ch : freq) {
      oddCnt += ch.second % 2;
      if (oddCnt > k)
        return false;
    }

    return true;
  }
};
