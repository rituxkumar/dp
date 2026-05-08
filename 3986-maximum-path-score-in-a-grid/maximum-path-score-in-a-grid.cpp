class Solution {
public:
    int m, n;
    vector<vector<vector<int>>> dp;
    const int NEG = -1e9;

    int solve(vector<vector<int>>& grid, int i, int j, int k) {
        if (i >= m || j >= n) return NEG;

        int cost = (grid[i][j] == 0) ? 0 : 1;
        int score = grid[i][j];

        if (k < cost) return NEG;

        if (i == m-1 && j == n-1) return score;

        if (dp[i][j][k] != -1) return dp[i][j][k];

        int right = solve(grid, i, j+1, k - cost);
        int down  = solve(grid, i+1, j, k - cost);

        int best = max(right, down);

        if (best == NEG)
            return dp[i][j][k] = NEG;

        return dp[i][j][k] = score + best;
    }

    int maxPathScore(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();

        dp.assign(m, vector<vector<int>>(n, vector<int>(k+1, -1)));

        int ans = solve(grid, 0, 0, k);

        return (ans < 0) ? -1 : ans;
    }
};