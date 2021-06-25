class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        help(s, 0, s.size(), curr, res);
        return res;
    }
    
    void help(string s, int idx, int n, vector<string>& curr, vector<vector<string>>& res){
        if(idx == n){
            res.push_back(curr);
            return;
        }
        
        for(int i = idx; i < n; i++){
            if(isPal(s, idx, i)){
                curr.push_back(s.substr(idx, i - idx + 1));
                help(s, i + 1, n, curr, res);
                curr.pop_back();
            }
        }
    }
    
    bool isPal(string s, int st, int end){
        while(st <= end){
            if(s[st++] != s[end--])return false;
        }
        return true;
    }
    
    
    
};
