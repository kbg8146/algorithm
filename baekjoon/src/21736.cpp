#include <iostream>
#include <queue>
using namespace std;

queue<pair<int,int>> q;
vector<int> v;
int visited[601][601];
int n,m;
string information[601];
int cnt=0;
bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<m;
}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void bfs(int i,int j){
    visited[i][j]=1;
    q.push({i,j});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i]; 
            int ny=y+dy[i];
            if(InRange(nx,ny)&&!visited[nx][ny]&&information[nx][ny]!='X'){
                if(information[nx][ny]=='P'){
                    cnt++;
                }
                q.push({nx,ny});
                visited[nx][ny]=1;
            }
        }
    }
}

int main(){

    
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> information[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(information[i][j]=='I'){
                bfs(i,j);
                if(cnt==0){
                    cout << "TT";
                    return 0;
                }
                break;
            }
        }
    }
    cout << cnt;



    return 0;
}