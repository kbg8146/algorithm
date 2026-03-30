#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,r;
int u,v;
vector<vector<int>> graph;
queue<int> q;
vector<int> visited;
vector<int> depth;

void bfs(){
    int cnt=1;
    q.push(r);
    visited[r]=cnt;
    depth[r]=0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            int next = graph[x][i];
            if(!visited[next]){
                q.push(next);
                visited[next] = ++cnt;
                depth[next]=depth[x]+1;
            }
        }
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> r;
    graph.assign(n+1,vector<int>());
    visited.assign(n+1,0);
    depth.assign(n+1,-1);
    for(int i=0;i<m;i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(graph[i].begin(),graph[i].end());
    }

    bfs();
    long long ans=0;
    for(int i=1;i<=n;i++){
        ans+=(long long)visited[i]*depth[i];
    }
    cout << ans;

    return 0;
}
