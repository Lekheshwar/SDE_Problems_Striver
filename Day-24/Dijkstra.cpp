#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        
        q.push({dist[S], S});
        
        while(!q.empty()){
            int curr = q.top().second;
            
            q.pop();
            
            for(auto x : adj[curr]){
                if(dist[x[0]] > dist[curr] + x[1]){
                    q.push({dist[x[0]], x[0]});
                    dist[x[0]] = dist[curr] + x[1];
                    q.push({dist[x[0]], x[0]});
                }
            }
        }
        
        return dist;
    }
};
