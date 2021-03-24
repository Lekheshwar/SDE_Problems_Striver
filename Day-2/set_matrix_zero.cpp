void setZeroes(vector<vector<int>>& m) {
        bool col = false, row = false;
        
        for(int i = 0; i < m.size(); i++){
            for(int j = 0; j < m[0].size(); j++){
                if(m[i][j] == 0){
                    if(i == 0)row = true;
                    if (j == 0)col = true;
                    m[i][0] = m[0][j] = 0;
                }
            }
        }
        
       
        
        for(int i = 1; i < m.size(); i++){
            for(int j = 1; j < m[0].size(); j++){
                if(m[i][0] == 0 || m[0][j] == 0)m[i][j] = 0;
            }
        }
        
        if(row)
            for(int i = 0; i < m[0].size(); i++)
                m[0][i] = 0;
        if(col)
            for(int i = 0; i < m.size(); i++)
                m[i][0] = 0;
    }
