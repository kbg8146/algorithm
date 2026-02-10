#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;
int u,v;
vector<vector<int>> graph;
vector<int> visited;
queue<int> q;
void bfs(int r){
    q.push(r);
    visited[r]=true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            int next = graph[x][i];
            if(!visited[next]){
                visited[next] =true;
                q.push(next);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    graph.assign(n+1,vector<int>());
    visited.assign(n+1,0);
    for(int i=0;i<m;i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            bfs(i);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}