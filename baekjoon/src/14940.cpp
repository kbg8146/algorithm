#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
vector<vector<int>> v;
vector<vector<int>> visited;
queue<pair<int,int>> q;
vector<vector<int>> path;

int dr[4]={1,0,-1,0};
int dc[4]={0,1,0,-1};

int InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    v.assign(n,vector<int>(m,0));
    visited.assign(n,vector<int>(m,0));
    path.assign(n,vector<int>(m,-1));
    int a, b;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
            if(v[i][j]==2){
                a=i;
                b=j;
            }
            else if(v[i][j]==0){
                path[i][j]=0;
            }
        }
    }
    q.push({a,b});
    visited[a][b] = 1;
    path[a][b] = 0;
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(InRange(nr,nc)&&!visited[nr][nc]&&v[nr][nc]==1){
                visited[nr][nc] = 1;
                path[nr][nc] = path[r][c] + 1;
                q.push({nr,nc});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << path[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}