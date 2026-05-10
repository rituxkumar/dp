class Solution {
public:
    int n;
    int dp[1001][1001];

    int solve(int i, vector<int>& nums, int target, vector<int>& dp) {
        if (i == n - 1) {
            return 0;
        }
        int result = INT_MIN;
        if(dp[i] != INT_MIN ){
            return dp[i];
        }

        for (int j = i + 1; j < n; j++) {
            if (abs(nums[i] - nums[j]) <= target) {
                int temp = 1 + solve(j, nums, target, dp);
                result = max(result, temp);
            }
        }

        return dp[i] =  result;
    }
    int maximumJumps(vector<int>& nums, int target) {
        n = nums.size();
        vector<int> dp(n + 1, INT_MIN);

        int result = solve(0, nums, target, dp);
        // memset(dp,-1,sizeof(dp));

        return result < 0 ? -1 : result;
    }
};