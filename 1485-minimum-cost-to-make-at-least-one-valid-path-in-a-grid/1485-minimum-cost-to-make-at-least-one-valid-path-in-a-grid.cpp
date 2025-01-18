class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int rows = grid.size(), cols = grid[0].size();

        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;

        pq.push({0, 0, 0});
        vector<vector<int>> minimumCost(rows, vector<int>(cols, INT_MAX));
        minimumCost[0][0] = 0;

        while (!pq.empty()) {
            auto current = pq.top();
            pq.pop();
            int cost = current[0], row = current[1], col = current[2];
            if (cost != minimumCost[row][col])
                continue;
            for (int dir = 0; dir < 4; ++dir) {
                int newRow = row + directions[dir][0];
                int newCol = col + directions[dir][1];

                if (newRow >= 0 && newRow < rows && newCol >= 0 &&
                    newCol < cols) {
                    int newCost;
                    if (dir != (grid[row][col] - 1))
                        newCost = cost + 1;
                    else
                        newCost = cost;

                    if (newCost < minimumCost[newRow][newCol]) {
                        minimumCost[newRow][newCol] = newCost;
                        pq.push({newCost, newRow, newCol});
                    }
                }
            }
        }
        return minimumCost[rows - 1][cols - 1];
    }
};