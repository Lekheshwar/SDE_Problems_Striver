     int maxMeetings(int start[], int end[], int n) {
        vector<vector<int>> arr;
        for(int i = 0; i < n; i++){
            vector<int> temp = {end[i], start[i], i};
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        int res = 0;
        int last = -1;
        for(auto x : arr){
            if(x[1] > last){
                res++;
                last = x[0];
            }
        }
        return res;
    }
