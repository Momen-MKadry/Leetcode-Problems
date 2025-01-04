class Solution {
public:
  int countPalindromicSubsequence(string s) {
    map<char, pair<int, int>> alphaOccur;
    unordered_set<string> palindromes;

    for (char c = 'a'; c <= 'z'; c++) {
      alphaOccur[c] = make_pair(-1, -1);
    }

    for (int i = 0; i < s.size(); i++) {
      char c = s[i];
      if (alphaOccur[c].first == -1) {
        alphaOccur[c].first = i;
      }
      alphaOccur[c].second = i;
    }

    for (char c = 'a'; c <= 'z'; c++) {
      if (alphaOccur[c].first != -1 && alphaOccur[c].second != -1) {
        int first = alphaOccur[c].first;
        int last = alphaOccur[c].second;

        if (last - first > 1) {
          for (int i = first + 1; i < last; i++) {
            string palindrome = string(1, c) + s[i] + string(1, c);
            palindromes.insert(palindrome);
          }
        }
      }
    }
    return palindromes.size();
  }
};
