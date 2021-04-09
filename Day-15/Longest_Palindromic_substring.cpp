    string res = "";
    int mx = -1;
    string longestPalindrome(string s) {
        int n = s.size();
        for(int i = 0; i < s.size(); i++){
            help(i,i, s, n);
            help(i, i + 1,s, n);
        }
        return res;
    }
    
    void help(int l, int r, string s, int n){
        while(l >= 0 && r < n && s[l] == s[r])l--,r++;
        if(r - l - 1 > mx)
            mx = r - l - 1, res = s.substr(l + 1, r - l - 1);
    }
