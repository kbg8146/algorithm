#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,r,u,v;
vector<vector<int>> graph;
vector<int> visited;
int cnt = 1;
void dfs(int a){
    visited[a] = cnt++;
    for(int i=0;i<graph[a].size();i++){
        int next = graph[a][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> r;
    graph.resize(n+1);
    visited.resize(n+1);
    for(int i=0;i<m;i++){
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(graph[i].begin(),graph[i].end(),greater<int>());
    }

    dfs(r);

    for(int i=1;i<=n;i++){
        cout << visited[i] << "\n";
    }
    return 0;
}