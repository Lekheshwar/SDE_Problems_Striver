class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        for(int i = 0; i <= n - 4; i++){
            for(int j = i + 1; j <= n - 3; j++){
                int tgx = target - nums[i] - nums[j];
                int l = j + 1, r = n - 1;
                while(l < r){
                    if(nums[l] + nums[r] > tgx)r--;
                    else if(nums[l] + nums[r] < tgx)l++;
                    else{
                        int t1 = nums[l], t2 = nums[r];
                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while(l < r && nums[l] == t1)l++;
                        while(r > l && nums[r] == t2)r--;
                    }
                }
                int x = nums[j];
                while(j + 1 < n && nums[j + 1] == x)j++;
            }
            int x = nums[i];
            while(i + 1 < n && nums[i + 1] == x)i++;
        }
        return res;
    }
};
