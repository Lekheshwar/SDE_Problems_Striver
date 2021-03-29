int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int ans = 0, i = 0, j = 0, n = s.size();
        while(j < n){
            if(mp.find(s[j]) == mp.end() || mp[s[j]] < i){
                mp[s[j]] = j;
            }
            else{
                ans = max(ans, j - i);
                i = mp[s[j]] + 1;
                mp[s[j]] = j;
            }
            j++;
        }
        return max(ans, j - i);
    }

