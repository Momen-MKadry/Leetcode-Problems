class Solution {
public:
  int maxVowels(string s, int k) {
    int maxV = 0, currV = 0;

    for (int i = 0; i < s.size(); i++) {
      if (i >= k && isVowel(s[i - k]))
        currV--;

      if (isVowel(s[i]))
        currV++;

      if (currV == k)
        return k;
      maxV = max(maxV, currV);
    }

    return maxV;
  }

  bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }
};
