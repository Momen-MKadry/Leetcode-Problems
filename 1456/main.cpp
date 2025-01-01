class Solution {
public:
  int maxVowels(string s, int k) {
    int maxV = 0, currV = 0;
    string sub = "";
    for (int i = 0; i < k; i++) {
      sub += s[i];
      if (isVowel(s[i]))
        maxV++;
    }

    currV = maxV;

    for (int i = 1; i < s.size() - k + 1; i++) {
      // cout << "OLD: " << sub << " - " << currV;
      if (isVowel(s[i - 1]))
        currV--;
      // sub = sub.substr(1, k-1);
      sub.erase(0, 1);
      sub += s[i + k - 1];

      if (isVowel(s[i + k - 1]))
        currV++;
      maxV = max(maxV, currV);

      if (maxV == k)
        return maxV;
      // cout << " NEW: " << sub << " - " << currV << endl;
    }
    return maxV;
  }

  bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }
};
