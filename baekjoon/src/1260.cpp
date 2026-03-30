#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n,m,v;
vector<vector<int>> graph;
queue<int> q;

int bvisited[1001];
int dvisited[1001];

void bfs(){
    q.push(v);
    bvisited[v]=1;
    cout << v << " ";
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            int next = graph[x][i];
            if(!bvisited[next]){
                cout << next << " ";
                q.push(next);
                bvisited[next]=1;
            }            
        }
    }
}
void dfs(int a){
    dvisited[a]=1;
    cout << a << " ";
    for(int i=0;i<graph[a].size();i++){
        int next = graph[a][i];
        if(!dvisited[next]){
            dfs(next);
        }
    }
}

int main(){

    cin >> n >> m >> v;
    graph.assign(n+1,vector<int>());
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(v);
    cout << "\n";
    bfs();

    return 0;
}