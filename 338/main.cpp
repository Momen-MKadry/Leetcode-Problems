class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> result;

    for (int i = 0; i <= n; ++i) {
      int curr = i;
      int cnt = 0;
      while (curr) {
        curr = curr & (curr - 1);
        ++cnt;
      }
      result.push_back(cnt);
    }
    return result;
  }
};
