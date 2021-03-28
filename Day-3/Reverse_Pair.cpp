    int merge(vector<int>& nums, int left, int mid, int right){
        int cost = 0;
        int lx = left, rx = mid;
        
        while(lx < mid){
            while(rx <= right && nums[rx] * 2LL < nums[lx])
                rx++;    
            cost += (rx - (mid));
            lx++;
        }
        
        vector<int> temp;
        int it1 = left, it2 = mid;
        
        while(it1 < mid && it2 <= right){
            if(nums[it1] < nums[it2])
                temp.push_back(nums[it1++]);
            else
                temp.push_back(nums[it2++]);
        }
        
        while(it1 < mid)
            temp.push_back(nums[it1++]);
        while(it2 <= right)
            temp.push_back(nums[it2++]);
        
        int op = 0;
        for(int i = left; i <= right; i++){
            nums[i] = temp[op++];
        }
        
        return cost;
        
    }
    
    
    
    int mergeSort(vector<int>& nums, int left, int right){
        // BASE CASE   
        if(left >= right)return 0;
        
        int mid = (left + right) / 2;
        
        int ans = mergeSort(nums, left, mid);
        ans += mergeSort(nums, mid + 1, right);
        ans += merge(nums, left, mid + 1, right);
        return ans;
    }
    
    
    
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
