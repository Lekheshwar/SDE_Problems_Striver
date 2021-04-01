    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        vector<vector<int>> res;
        
        for(int i = 0; i < n - 2; i++){
            int tar = -nums[i];
            
            int lo = i + 1, hi = n - 1;
            
            while(lo < hi){
                if(nums[lo] + nums[hi] == tar){
                    res.push_back({nums[i], nums[lo], nums[hi]});
                    while(lo < hi && nums[lo] == nums[lo + 1])lo++;
                    lo++;
                    while(hi > lo && nums[hi] == nums[hi - 1])hi--;
                    hi--;
                }
                else if(nums[lo] + nums[hi] < tar)lo++;
                else hi--;
            }
            while(i+1 < n && nums[i + 1] == nums[i])i++;
        }
        return res;
    }
