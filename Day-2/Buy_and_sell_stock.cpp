int maxProfit(vector<int>& p) {
        int ans = 0, n = p.size();
        int mx = p[n - 1];
        for(int i = n - 2; i >= 0; i--){
            if(p[i] > mx){
                mx = p[i];
            }
            else{
                ans = max(ans, mx - p[i]);
                
            }
        }
        return ans;
    }
