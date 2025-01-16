class Solution {
public:
  int findChampion(int n, vector<vector<int>> &edges) {
    vector<int> inFreq(n, 0);
    vector<int> outFreq(n, 0);

    for (int i = 0; i < edges.size(); ++i) {
      inFreq[edges[i][1]]++;
      outFreq[edges[i][0]]++;
    }
    int strongCnt = 0;
    int strong;
    for (int i = 0; i < inFreq.size(); ++i) {
      if (inFreq[i] == 0) {
        strong = i;
        strongCnt++;
      }
    }
    if (strongCnt == 1)
      return strong;
    else
      return -1;
  }
};