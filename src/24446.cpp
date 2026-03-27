#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m,r;
vector<vector<int>> v(n);
queue<int> q;
int visited[100001];

void bfs(){
    int cnt=1;
    q.push(r);
    visited[r] = cnt;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            int next = v[x][i];
            if(!visited[next]){
                q.push(next);
                visited[next]=++cnt;
            }
            
        }
    }
}

int main(){
    cin >> n >> m >> r;

    for(int i=0;i<m;i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfs();

    for(int i=0;i<n;i++){
        cout << visited[i] << "\n";
    }

    return 0;
}