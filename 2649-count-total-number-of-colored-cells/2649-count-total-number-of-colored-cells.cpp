class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1;
        for (long long i = 0; i < n; ++i) {
            ans += (4 * i);
        }
        return ans;
    }
};