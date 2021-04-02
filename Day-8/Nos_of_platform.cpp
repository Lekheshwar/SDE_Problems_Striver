Isme bas diye hue number ko sort karna hai, such that each arrival is denoted by 0 and departure is denoted by 1. Ek count variable leke increase if its arrival, else decrease.

int findPlatform(int arr[], int dep[], int n)
    {
    	int res = 0, cnt = 0;
    	vector<pair<int,int>> a;
    	for(int i = 0; i < n; i++){
    	    a.push_back(make_pair(arr[i], 0));
    	    a.push_back(make_pair(dep[i], 1));
    	}
    	sort(a.begin(), a.end());
    	for(auto x : a){
    	    if(x.second)cnt--;
    	    else cnt++;
    	    res = max(res,cnt);
    	}
    	return res;
    }
