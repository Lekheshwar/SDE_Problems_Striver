void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr = m + n - 1;
        int x = m - 1, y = n - 1;
        
        while(x >= 0 && y >= 0){
            if(nums1[x] > nums2[y])
                nums1[ptr--] = nums1[x--];
            else
                nums1[ptr--] = nums2[y--];
        }
        if(y >= 0)
            while(y >= 0)
                nums1[ptr--] = nums2[y--];
            
        
    }
