class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rows = mat.size(), cols = mat[0].size();

        vector<int> freqRows(rows, 0);
        vector<int> freqCols(cols, 0);

        unordered_map<int, pair<int, int>> pos;

        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[0].size(); ++j) {
                pos[mat[i][j]] = {i, j};
            }
        }

        for (int i = 0; i < arr.size(); ++i) {
            int element = arr[i];
            int x = pos[element].first;
            int y = pos[element].second;

            ++freqRows[x];
            if (freqRows[x] == cols)
                return i;

            ++freqCols[y];
            if (freqCols[y] == rows)
                return i;
        }
        return -11;
    }
};