class Solution {
public:
    
    int dp[501][501];
    
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof dp);
        return minDist(0, 0, word1, word2);
    }
    
    private:
    int minDist(int i, int j, string s1, string s2){
        
        if(i == s1.size()) return s2.size() - j;
        
        if(j == s2.size()) return s1.size() - i;
        
        if(dp[i][j] != -1)return dp[i][j];
        
        if(s1[i] == s2[j])
            return dp[i][j] = minDist(i + 1, j + 1, s1, s2);
        
        else{
            int op1 = minDist(i, j + 1, s1, s2);
            int op2 = minDist(i+1, j, s1, s2);
            int op3 = minDist(i + 1, j + 1, s1, s2);
            return dp[i][j] = 1 + min({op1, op2, op3});
        }
        
    }
};
