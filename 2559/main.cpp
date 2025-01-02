class Solution {
public:
  bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }

  vector<int> vowelStrings(vector<string> &words,
                           vector<vector<int>> &queries) {

    int l, r;
    vector<int> prefArr;
    vector<int> ans;

    for (int i = 0; i < words.size(); i++) {
      if (isVowel(words[i].front()) && isVowel(words[i].back())) {
        prefArr.push_back(1);
      } else
        prefArr.push_back(0);
    }

    for (int i = 1; i < prefArr.size(); i++) {
      prefArr[i] += prefArr[i - 1];
    }
    // for(int i = 0; i < prefArr.size(); i++)
    //     cout << i << "\t";
    // cout << endl;

    // for(int i : prefArr) {
    //     cout << i << "\t";
    // }
    // cout << endl;

    for (int i = 0; i < queries.size(); i++) {
      l = queries[i][0];
      r = queries[i][1];
      int cnt = 0;

      if (l == 0) {
        cnt += prefArr[r];
      } else {
        // cout << "L: " << l << " R: "<< r << " P{L}: " << prefArr[l] << "
        // P{R}: " << prefArr[r] << endl;
        cnt += prefArr[r] - prefArr[l - 1];
      }

      ans.push_back(cnt);
    }

    return ans;
  }
};
;
