class Solution {
public:
    
    void help(vector<int>& nums, int idx, vector<vector<int>>& res, vector<int>& curr, int n){
        res.push_back(curr);
        for(int i = idx; i < n; i++){
            if(i != idx && nums[i] == nums[i - 1])continue;
            curr.push_back(nums[i]);
            help(nums, i + 1, res, curr, n);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        help(nums, 0, res, curr, nums.size());
        return res;
    }
};
