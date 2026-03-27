#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,r,u,v;
vector<vector<int>> num;
vector<int> visited;
int cnt=1;
void dfs(int a){
    visited[a] = cnt++;
    for(int i=0;i<num[a].size();i++){
        int next = num[a][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> r;
    num.assign(n+1,vector<int>());
    visited.assign(n+1,0);
    for(int i=0;i<m;i++){
        cin >> u >> v;
        num[u].push_back(v);
        num[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        sort(num[i].begin(),num[i].end());
    }
    dfs(r);

    for(int i=1;i<=n;i++){
        cout << visited[i] << "\n";
    }

    return 0;
}