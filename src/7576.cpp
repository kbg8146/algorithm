#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;

vector<vector<int>> v;
queue<pair<int,int>> q;

int dr[4]={1,0,-1,0};
int dc[4]={0,1,0,-1};

int visited[1001][1001];

int InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<m;
}

int main(){
    cin >> m >> n;
    v.assign(n+1,vector<int>(m+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }

    bool nyet=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==1){ //익은거 큐에 다 넣기
                q.push({i,j});
                visited[i][j]=1;
                
            }
            else if(v[i][j]==0){
                nyet=0;
            }
        }
    }
    if(nyet){
        cout << 0;
        return 0;
    }
    int day=0;
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int nr = r + dr[k];
            int nc = c + dc[k];
            if(InRange(nr,nc)&&v[nr][nc]==0&&!visited[nr][nc]){
                q.push({nr,nc});
                visited[nr][nc]=visited[r][c]+1;
                day = visited[nr][nc];
                v[nr][nc]=1;
            }
        }
    }
    bool done = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                done = 0;
            }
        }
    }
    if(done){
        cout << day-1;
    }
    else{
        cout << -1;
    }

    return 0;
}