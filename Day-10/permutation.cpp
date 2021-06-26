class Solution {
public:
    
    void help(vector<int>& nums, int idx, vector<vector<int>>& res){
        if(nums.size() == idx){
            res.push_back(nums);
            return;
        }
        
        for(int i = idx; i < nums.size(); i++){
            swap(nums[idx], nums[i]);
            help(nums, idx + 1, res);
            swap(nums[idx], nums[i]);
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        help(nums, 0, res);
        return res;
    }
};
