vector<int> majorityElement(vector<int>& nums) {
        int num1 = -1, num2 = -1, cnt1 = 0, cnt2 = 0;
        for(int x : nums){
            if(num1 == x)cnt1++;
            else if( num2 == x)cnt2++;
            else if(cnt1 == 0)num1 = x, cnt1++;
            else if(cnt2 == 0)num2 = x, cnt2++;
            else cnt1--,cnt2--;
        }
        cnt1 = cnt2 = 0;
        for(int x : nums){
            if(x == num1)cnt1++;
            else if(x == num2)cnt2++;
        }
        vector<int> res;
        if(cnt1 > nums.size() / 3)
            res.push_back(num1);
        if(cnt2 > nums.size() / 3)
            res.push_back(num2);
        return res;
    }
