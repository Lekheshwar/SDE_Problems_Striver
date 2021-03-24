int findDuplicate(vector<int>& nums) {
        int ff = nums[0], ss = nums[0], n = nums.size();
        do{
            ff = nums[nums[ff]];
            ss = nums[ss];
        }while(ff != ss);
        ss = nums[0];
        while(ss != ff){
            ss = nums[ss];
            ff = nums[ff];
        }
        return ss;
    }
