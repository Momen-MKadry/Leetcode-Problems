class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int size = grid.size();
        int matSize = size * size;

        unsigned int actualSum = 0, actualSumSquared = 0;
        unsigned int trueSum = 0, trueSumSquared = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                actualSum += grid[i][j];
                actualSumSquared += (grid[i][j] * grid[i][j]);
            }
        }

        for (int i = 0; i < matSize + 1; ++i) {
            trueSum += i;
            trueSumSquared += (i * i);
        }

        int func1 = actualSum - trueSum;
        int func2 = actualSumSquared - trueSumSquared;

        int func3 = func2 / func1;
        int r = (func3 + func1) / 2;
        int m = -1 * (func1 - r);

        ans.push_back(r);
        ans.push_back(m);

        return ans;
    }
};