class Solution {
public:
  vector<string> wordSubsets(vector<string> &words1, vector<string> &words2) {
    vector<int> w2Freq(26, 0);
    vector<int> tempFreq(26, 0);
    vector<string> result;

    for (auto str : words2) {
      fill(tempFreq.begin(), tempFreq.end(), 0);
      for (auto ch : str) {
        ++tempFreq[ch - 'a'];
      }
      for (int i = 0; i < 26; ++i)
        w2Freq[i] = max(w2Freq[i], tempFreq[i]);
    }

    for (auto str : words1) {
      fill(tempFreq.begin(), tempFreq.end(), 0);
      for (auto ch : str) {
        ++tempFreq[ch - 'a'];
      }
      bool in = true;
      for (int i = 0; i < 26; ++i) {
        if (w2Freq[i] > tempFreq[i]) {
          in = false;
          break;
        }
      }
      if (in)
        result.push_back(str);
    }
    return result;
  }
};
