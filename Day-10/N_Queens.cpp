class Solution {
public:
    
    void backTrack(int row, int n, vector<int>& colFlag, vector<int>& diag45, vector<int>& diag135, vector<string>& board, vector<vector<string>>& ans){
        
        if(row == n){
            ans.push_back(board);
            return;
        }
        
        for(int i = 0; i < n; i++){
            if(colFlag[i] && diag45[row + i] && diag135[n - 1 + i - row]){
                colFlag[i] = diag45[row + i] = diag135[n - 1 + i - row] = 0;
                board[row][i] = 'Q';
                backTrack(row + 1, n, colFlag, diag45, diag135, board, ans);
                board[row][i] = '.';
                colFlag[i] = diag45[row + i] = diag135[n - 1 + i - row] = 1;
            }
        }

    }
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        
        vector<int> colFlag(n, 1), diag45(2 * n - 1, 1), diag135(2 * n - 1, 1);
        
        backTrack(0, n, colFlag, diag45, diag135, board, ans);
        return ans;
    }
};
