    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1, ans = 0;
        while(i < n){
            if(nums[i] == 0){
                i++;
            }
            else{
                j = i + 1;
                while(j < n && nums[j] == 1)j++;
                ans = max(ans, j - i);
                i = j;
            }
        }
        return ans;
    }
