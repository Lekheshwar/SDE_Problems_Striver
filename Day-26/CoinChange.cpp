class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[13][10001];
        memset(dp, INT_MAX, sizeof dp);
        int n = coins.size();
        
        for(int i = 0; i <= amount; i++)
            dp[0][i] = INT_MAX-1;
        
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= amount; j++){
                if(i == 1 && (j % coins[i-1]) == 0){
                    dp[i][j] = j / coins[i - 1];
                    continue;
                }
                if(j == 0){
                    dp[i][j] = 0;
                    continue;
                }
                if(coins[i-1] > j){
                    dp[i][j] = dp[i-1][j];
                    continue;
                }
                
                dp[i][j] = min(dp[i-1][j], 1 + dp[i][j - coins[i-1]]);
            }
        }
        return dp[n][amount] == INT_MAX-1 ? -1 : dp[n][amount];
    }
};
