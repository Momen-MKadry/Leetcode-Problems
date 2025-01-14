class Solution {
public:
  vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
    vector<int> freq(51, 0);
    int n = A.size();
    vector<int> result;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j <= i; ++j) {
        ++freq[A[j]];
        ++freq[B[j]];

        if (B[j] != A[j]) {
          if (freq[A[j]] >= 2)
            ++cnt;
          if (freq[B[j]] >= 2)
            ++cnt;
        } else {
          if (freq[B[j]] >= 2)
            ++cnt;
        }
      }
      result.push_back(cnt);
      cnt = 0;
      fill(freq.begin(), freq.end(), 0);
    }

    return result;
  }
};
