#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,r;
int a,b;
vector<vector<int>> v;
queue<int> q;
vector<int> visited;
int cnt=1;
void bfs(){
    q.push(r);
    visited[r]=cnt;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            int next = v[x][i];
            if(!visited[next]){
                q.push(next);
                visited[next] = ++cnt;
                
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> r;
    v.assign(n+1,{});
    visited.assign(n+1,0);
    for(int i=0;i<m;i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    bfs();
    for(int i=1;i<=n;i++){
        cout << visited[i] << "\n";
    }
    return 0;
}