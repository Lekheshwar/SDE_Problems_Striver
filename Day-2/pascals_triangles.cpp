vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
        for(int i = 1; i <= numRows; i++){
            vector<int> curr;
            for(int j = 1; j <= i; j++){
                if(j == 1 || j == i){
                    curr.push_back(1);
                }
                else{
                    curr.push_back(res[i - 2][j - 2] + res[i - 2][j-1]);
                }
            }
            res.push_back(curr);
        }
        return res;
    }
