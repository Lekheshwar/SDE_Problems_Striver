bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int tot = m * n;
        int l = 0, r = tot - 1;
        while(l <= r){
            int mid = l + (r - l);
            int i = mid / m, j = mid % m;
            cout<<"dbg "<<i <<" : "<< j <<endl;
            if(matrix[i][j] == target)return true;
            else if(matrix[i][j] < target)l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
