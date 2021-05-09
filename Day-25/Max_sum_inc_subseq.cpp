class Solution {
public:
    
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int, int>> v;
        for(int i = 0; i < ages.size(); i++){
           v.push_back({ages[i], scores[i]});
        }
        sort(v.begin(), v.end());
        int res = 0 ;
       int cc[10001];
        for(int i = 0; i < scores.size() ; i++){
            cc[i] = v[i].second;
            for(int j = 0; j < i; j++){
                if(v[j].second > v[i].second) continue;
                cc[i] = max(cc[i], v[i].second + cc[j]);
            }
            res = max(res, cc[i]);
        }
        
        return res;
        
    }
};
