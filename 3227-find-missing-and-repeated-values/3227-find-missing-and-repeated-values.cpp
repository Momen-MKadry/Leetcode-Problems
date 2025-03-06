class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans = {0, 0};
        int size = grid.size();
        int matSize = (size * size);
        vector<int> freq(matSize+1, 0);
        vector<int> list;
        for(int i = 0; i < size; ++i) {
            for(int j = 0; j < size; ++j) {
                list.push_back(grid[i][j]);
            }
        }

        for(int i = 0; i < matSize; ++i)
            ++freq[list[i]];

        for(int i = 0; i < matSize+1; ++i) {
            if(freq[i] == 0)
                ans[1] = i;
            if(freq[i] == 2)
                ans[0] = i;
        }

        return ans;
    }
};