class Solution {
public:

    void help(vector<int>& arr, int n,int idx, int tgt, vector<int>& curr, vector<vector<int>>& res){
        if(idx == n){
            if(tgt == 0)res.push_back(curr);
            return;
        }
        
        if(tgt >= arr[idx]){
            curr.push_back(arr[idx]);
            help(arr, n, idx, tgt - arr[idx], curr, res);
            curr.pop_back();
        }
        help(arr, n, idx + 1, tgt, curr, res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> res;
        help(candidates, candidates.size(), 0, target, curr, res);
        return res;
    }
};
