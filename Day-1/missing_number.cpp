int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int sum = (n * (n + 1)) / 2, asum = 0;
        // for(auto x : nums)asum += x;
        // return sum - asum;
        
        int xr = nums.size();
        for(int i = 0; i < nums.size(); i++){
            xr ^= nums[i];
            xr ^= i;
        }
        return xr;
    }
