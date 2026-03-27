#include <iostream>
#include <string>
#include <queue>

using namespace std;

int n,m;
string maze[101*101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int visited[101][101];

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<m;
}
void bfs(){
    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0] = 1;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x==n-1 && y==m-1){
            cout << visited[x][y];
            return;
        }

        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(InRange(nx,ny)&&maze[nx][ny]=='1'&&!visited[nx][ny]){
                q.push({nx,ny});
                visited[nx][ny] = visited[x][y]+1;
            }     
        }

    }
}

int main(){

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> maze[i];
    }
    bfs();


    return 0;
}