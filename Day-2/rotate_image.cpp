void rotate(vector<vector<int>>& m) {
        int n = m.size();
        // reversing
        for(int j = 0; j < n; j++){
            for(int i = 0; i < n/2; i++){
                swap(m[i][j], m[n - i - 1][j]);
            }
        }
        // transposing
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                swap(m[i][j], m[j][i]);
            }
        }
        return;
    }

