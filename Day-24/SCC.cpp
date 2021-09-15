// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void dfs(int curr, stack<int> &st, vector<int> adj[], vector<int>& vis){
	    vis[curr] = 1;
	    for(auto x : adj[curr]){
	        if(vis[x] == 0) dfs(x, st, adj, vis);
	    }
	    st.push(curr);
	}
	
	void explore(int curr, vector<int> trans[], vector<int>& vis){
	    vis[curr] = 1;

	    for(auto x : trans[curr]){
	        if(!vis[x])explore(x, trans, vis);
	    }
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        
        vector<int> vis(V, 0);
        stack<int> st;
        
        // 1) DFS
        for(int i = 0; i < V; i++){
            if(!vis[i])dfs(i, st, adj, vis);
        }
        
        // 2) Transpose
        vector<int> trans[V];
        for(int i = 0; i < V; i++){
            for(auto x : adj[i]){
                trans[x].push_back(i);
            }
        }
        
        // 3) SCC
        for(int i = 0; i < V; i++)vis[i] = 0;
        int ans = 0;
        
        
        while(!st.empty()){
            int curr = st.top();
            st.pop();
            
            if(!vis[curr]){
                explore(curr, trans, vis);
                ans++;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}
