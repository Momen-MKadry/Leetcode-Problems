class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> suffix(n, 0);
        vector<long long> prefix(n, 0);
        long long ans = LLONG_MAX;
        suffix[n - 1] = grid[0][n - 1];
        prefix[0] = grid[1][0];

        for (int i = 1; i < n; ++i)
            prefix[i] += (prefix[i - 1] + grid[1][i]);
        for (int i = n - 2; i >= 0; --i)
            suffix[i] += (suffix[i + 1] + grid[0][i]);

        for(int i = 0; i < n; ++i) {
            long long r2Second;
            long long r2First;
            if(i == 0)
                r2Second = 0;
            else
                r2Second = prefix[i-1];
            if(i == n-1)
                r2First = 0;
            else
                r2First = suffix[i+1];
            
            ans = min(ans, max(r2First, r2Second));
        }

        return ans;
    }
};