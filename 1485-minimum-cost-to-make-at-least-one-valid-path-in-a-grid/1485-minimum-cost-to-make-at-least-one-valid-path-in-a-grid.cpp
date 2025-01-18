class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int rows = grid.size(), cols = grid[0].size();

        deque<pair<int, int>> dq;
        vector<vector<int>> minimumCost(rows, vector<int>(cols, INT_MAX));
        minimumCost[0][0] = 0;
        dq.push_front({0, 0});

        while (!dq.empty()) {
            auto [row, col] = dq.front();
            dq.pop_front();

            for (int i = 0; i < 4; ++i) {
                int newRow = row + directions[i][0];
                int newCol = col + directions[i][1];
                int cost;
                if (newRow >= 0 && newRow < rows && newCol >= 0 &&
                    newCol < cols) {
                    int cost = (grid[row][col] != (i + 1)) ? 1 : 0;

                    if (minimumCost[row][col] + cost <
                        minimumCost[newRow][newCol]) {
                        minimumCost[newRow][newCol] =
                            minimumCost[row][col] + cost;

                        if (cost == 1) {
                            dq.push_back({newRow, newCol});
                        } else {
                            dq.push_front({newRow, newCol});
                        }
                    }
                }
            }
        }
        return minimumCost[rows - 1][cols - 1];
    }
};