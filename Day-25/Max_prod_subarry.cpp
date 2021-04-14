    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int n = nums.size(), mxh = nums[0], mnh = nums[0];
        for(int i = 1; i < n; i++){
                int tmp = mxh;
                mxh = max(nums[i], max(nums[i] * mxh, nums[i] * mnh));
                mnh = min(nums[i], min(nums[i] * mnh, nums[i] * tmp));
                res = max(res, mxh);
        }
        return res;
    }
