class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> res;
		    int n = s.size();
		    for(int i = 0; i <= ((1 << n) - 1); i++){
		        string str = "";
		        for(int j = 0; j <= n; j++)
		            if(i & (1 << j))
		                str += s[j];
		        if(str != "")res.push_back(str);
		    }
		    sort(res.begin(), res.end());
		    return res;
		}
};
