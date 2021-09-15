	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
        vector<int> dist(n, 1e8);
        dist[0] = 0;
        
        for(int i = 0; i < n - 1; i++){
            for(auto x : edges){
                int u = x[0], v = x[1], wt = x[2];
                if(dist[v] > dist[u] + wt){
                    dist[v] = dist[u] + wt;
                }
            }
        }
        
        for(auto x : edges){
            int u = x[0], v = x[1], wt = x[2];
            if(dist[v] > dist[u] + wt)return 1;
        }
        return 0;   
	}
