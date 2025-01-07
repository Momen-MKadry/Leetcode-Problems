class Solution {
public:
  vector<string> stringMatching(vector<string> &words) {
    vector<string> result;
    for (int i = 0; i < words.size(); ++i) {
      for (int j = 0; j < words.size(); ++j) {
        if (i != j) {
          auto idx = words[j].find(words[i]);
          if (idx != string::npos) {
            result.push_back(words[i]);
            break;
          }
        }
      }
    }
    return result;
  }
};
