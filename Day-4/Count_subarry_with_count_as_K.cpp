int countXor(vector<int>& arr, int m){
	int xr = 0, cnt = 0;
	map<int, int> mp;
	for(int a : arr){
		xr ^= a;
		if(xr == m)
			cnt++;
		if(mp.find(xr ^ m) != mp.end()){
			cnt += mp[xr ^ m];
		}
		mp[xr]++;
	}
	return cnt;
}

