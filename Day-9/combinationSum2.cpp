class Solution {
public:
    
    void help(vector<int>& arr, int n, int idx, int tgt, vector<int>& curr, vector<vector<int>>& res){
        if(idx == n){
            if(tgt == 0)res.push_back(curr);
            return;
        }
        
        if(arr[idx] <= tgt){
            curr.push_back(arr[idx]);
            help(arr, n, idx + 1, tgt - arr[idx], curr, res);
            curr.pop_back();
        }
        
        while(idx + 1 < n && arr[idx + 1] == arr[idx])idx++;
        help(arr, n, idx + 1, tgt, curr, res);

    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        vector<vector<int>> res;
        help(candidates, candidates.size(), 0, target, curr, res);
        return res;
    }
};
