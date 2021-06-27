class Solution{
    public:
    
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    string dir = "URDL";
    
    
    bool isValid(vector<vector<int>>& m, int row, int col, int n){
        return row >= 0 && row < n && col >= 0 && col < n && m[row][col];
    }
    
    void rec(vector<vector<int>>& m, int row, int col, int n, vector<string>& res, string path){
        if(row == n - 1 && col == n - 1){
            res.push_back(path);
            return;
        }
        
        for(int i = 0; i < 4; i++){
            int newRow = row + dx[i], newCol = col + dy[i];
            if(isValid(m, newRow, newCol, n)){
                m[row][col] = 0;
                rec(m, newRow, newCol, n, res, path + dir[i]);
                m[row][col] = 1;
            }
        }
    }

    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        if(!m[0][0] || !m[n - 1][n - 1])return res;
        
        rec(m, 0, 0, n, res, "");
        sort(res.begin(), res.end());
        
        return res;
    }
};
