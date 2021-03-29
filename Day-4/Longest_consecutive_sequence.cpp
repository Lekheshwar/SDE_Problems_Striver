int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for(int num : nums){
            mp.insert(num);
        }
        
        int ans = 0;
        
        for(auto num : mp){
            int currNum = num, cs = 1;
            if(mp.find(num - 1) == mp.end()){
                while(mp.find(currNum + 1) != mp.end()){
                    currNum++;
                    cs++;
                }
                ans = max(ans, cs);
            }
        }
        return ans;
    }
