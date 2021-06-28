class Solution {
public:

    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while(lo <= hi){
            int mid = (hi + lo) >> 1;
            
            //  MID IS THE TARGET  
            if(nums[mid] == target)return mid;
            
            // IF LEFT HALF IS SORTED 
            if(nums[mid] >= nums[lo]){
                if(nums[lo] <= target && nums[mid] > target)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            // IF RIGHT HALF IS SORTED
            else{
                if(nums[mid] <= target && nums[hi] >= target)
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        return -1;
    }
};
