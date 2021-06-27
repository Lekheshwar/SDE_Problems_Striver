int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int lo = 1, hi = 1e9;
    while(lo <= hi){
        int mid = (hi + lo) >> 1;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += (upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin());
        }
        if(cnt <= (n * m) / 2)lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}

