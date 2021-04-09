int romanToInt(string s) {
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int res = 0;
        reverse(s.begin(), s.end());
        
        // cout<<s<<endl;
        int prev = 0;
        for(auto x : s){
            if(mp[x] < prev){
                res -= mp[x];
                // cout<<res<<endl;
            }
            else{
                res += mp[x];
                // cout<<res<<endl;
            }
            prev = mp[x];
        }

        return res;
    }
