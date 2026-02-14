#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m,r;
vector<vector<int>> v;
queue<int> q;
vector<int> depth(100001);

void bfs(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        depth[i]=-1;
    }
    q.push(r);
    depth[r] = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            int next = v[x][i];
            if(depth[next]==-1){
                q.push(next);
                depth[next]=depth[x]+1;
            }
            
        }
    }
}

int main(){
    cin >> n >> m >> r;
    v.assign(n+1,vector<int> ());
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs();

    for(int i=1;i<=n;i++){
        cout << depth[i] << "\n";
    }

    return 0;
}