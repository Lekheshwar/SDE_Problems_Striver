// tc : O(n log N)

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        lis.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > lis.back())
                lis.push_back(nums[i]);
            else{
                int idx = lower_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
                lis[idx] = nums[i];
            }
        }
        return lis.size();
    }
};




// tc : O(n*n)
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        int ans = 1;
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[j] >= nums[i])continue;
                dp[i] = max(dp[i], dp[j] + 1);
                ans = max(dp[i], ans);
            }
        }
        return ans;
    }
};

