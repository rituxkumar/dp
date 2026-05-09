class Solution {
public:
    int m;
    int n;
    int dp[101][101];
    int solve(vector<vector<int>>& obstacleGrid, int i, int j) {
        if (i >= m || j >= n || obstacleGrid[i][j] == 1) {
            return 0;
        }
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if(dp[i][j] !=  -1){
            return dp[i][j];
        }
        int right = solve(obstacleGrid, i, j + 1);
        int down = solve(obstacleGrid, i + 1, j);

        return dp[i][j] =  right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(obstacleGrid, 0, 0);
    }
};