#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m,r,u,v;

vector<vector<int>> graph;
vector<int> depth;

void dfs(int a,int d){
    depth[a] = d++;
    for(int i=0;i<graph[a].size();i++){
        int next = graph[a][i];
        if(depth[next]==-1){
            dfs(next,d);
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> r;
    graph.resize(n+1);
    depth.resize(n+1,-1);
    for(int i=0;i<m;i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(r,0);
    for(int i=1;i<=n;i++){
        cout << depth[i] << "\n";
    }
    
    return 0;
}