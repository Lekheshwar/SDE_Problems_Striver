bool isValid(bool graph[101][101], int row, vector<int>& color, int k, int n){
    for(int i = 0; i < n; i++){
        if(graph[row][i] && color[i] == k)return false;
    }
    return true;
}

bool solve(bool graph[101][101], int row, int n, int m, vector<int>& color){
    if(row == n)return true;
    
    for(int i = 1; i <= m; i++){
        if(isValid(graph, row, color, i, n)){
            color[row] = i;
            if(solve(graph, row + 1, n, m, color))return true;
            color[row] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    vector<int> color(V + 1, 0);
    return solve(graph, 0, V, m, color);
}
