vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int i = 0, n = arr.size();
        while(i < n){
            int prev = arr[i][1];
            int j = i + 1;
            while(j < n && arr[j][0] <= prev){
                prev = max(arr[j][1], prev);
                j++;
            }
            res.push_back({arr[i][0], prev});
            i = j;
        }
        return res;
    }
