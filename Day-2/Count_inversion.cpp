long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        long long int ans = mergeSort(arr, temp, 0, N - 1);
        return ans;
    }
    
    long long int mergeSort(long long int arr[], long long temp[], int st, int end){
        long long cnt = 0;
        if(st < end){
            int mid = st + (end  - st) / 2;
            
            cnt += mergeSort(arr, temp, st, mid);
            cnt += mergeSort(arr, temp, mid + 1, end);
            
            cnt += merge(arr, temp, st, mid + 1, end);
        }
        
        return cnt;
    }
    
    long long int merge(long long int arr[], long long temp[], int st, int mid, int end){
        int l = st, r = mid;
        int k = st;
        long long int cnt = 0;
        while((l < mid) && (r <= end)){
            if(arr[l] <=  arr[r]){
                temp[k++] = arr[l++];
            }
            else{
                cnt += mid - l;
                temp[k++] = arr[r++];
            }
        }
        
        while(l < mid)
            temp[k++] = arr[l++];
            
        while(r <= end)
            temp[k++] = arr[r++];
            
        for(int i = st; i <= end; i++)
            arr[i] = temp[i];
            
        return cnt;
        
    }
    
