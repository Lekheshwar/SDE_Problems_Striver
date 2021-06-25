class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int dp[1002][1002];
       memset(dp, 0, sizeof dp);
       for(int i = 1; i <= n; i++){
           for(int j = 0; j <= W; j++){
               if(wt[i-1] > j)dp[i][j] = dp[i-1][j];
               else{
                   dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i - 1]], dp[i - 1][j]);
               }
           }
       }
       return dp[n][W];
    }
};