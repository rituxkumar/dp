class Solution {
public:
    int dp[501];
    int solve(int n) {
        if (n <= 1) {
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
     
        return dp[n] =n-1+ solve(n - 1);
    }
    int minCost(int n) {
        // return n*(n-1)/2;
        memset(dp, -1, sizeof(dp));
       return solve(n);

    }
};