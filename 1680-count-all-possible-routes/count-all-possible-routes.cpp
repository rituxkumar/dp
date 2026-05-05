class Solution {
public:
    int n;
    const int M = 1e9+7;
    int dp[101][201];

    int solve(vector<int>& locations, int i, int finish, int fuel){
        if(fuel < 0){
            return 0;
        }

        if(dp[i][fuel] != -1){
            return dp[i][fuel];
        }

        int ans = 0;

        if(i == finish){
            ans += 1;
        }

        for(int j = 0; j < n; j++){
            if(i != j){
                int cost = abs(locations[i] - locations[j]);
                if(fuel >= cost){
                    ans = (ans + solve(locations, j, finish, fuel - cost)) % M;
                }
            }
        }

        return dp[i][fuel] = ans;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        n = locations.size();
        memset(dp, -1, sizeof(dp));
        return solve(locations, start, finish, fuel);
    }
};