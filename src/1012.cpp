#include <iostream>
#include <queue>

using namespace std;

int arr[51][51];
int visited[51][51];

queue<pair<int,int>> q;

int t;
int m,n,k;
int cnt;
bool InRange(int row, int col){
    return 0<=row && row<n && 0<=col && col<m;
}

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void bfs(int row,int col){
    q.push({row,col});
    visited[row][col]=1;
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr= r+dx[i];
            int nc= c+dy[i];
            if(InRange(nr,nc)&&!visited[nr][nc]&&arr[nr][nc]){
                q.push({nr,nc});
                visited[nr][nc] = 1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i=0;i<t;i++){
        cnt=0;
        //가로: m j , 세로: n i
        cin >> m >> n >> k;        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
                visited[i][j]=0;
            }
        }
        for(int i=0;i<k;i++){
            int x,y;
            cin >> x >> y;
            arr[y][x]=1;
        }        

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]&&!visited[i][j]){
                    bfs(i,j);
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
        
    }


    return 0;
}