    int trap(vector<int>& h) {
        int n = h.size();
        int lo = 0, hi = n - 1, left_max = 0, right_max = 0;
        int res = 0;
        while(lo <= hi){
            if(h[lo] <= h[hi]){
                if(h[lo] >= left_max)
                    left_max = h[lo];
                else
                    res += left_max - h[lo];  
                lo++;
            }
            else{
                if(h[hi] >= right_max)
                    right_max = h[hi];
                else
                    res += right_max - h[hi];
                hi--;
            }
        }
        return res;
    }
