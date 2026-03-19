#include <iostream>
#include <vector>

using namespace std;
int n ,m;
vector<vector<int>> paper;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int visited[501][501];
int InRange(int r, int c){
    return 0<=r && r<n && 0<=c && c<m;
}
int cnt; int area;
void dfs(int r,int c){
    visited[r][c]=1;
    area++;
    for(int i=0;i<4;i++){
        int nr = r+dx[i];
        int nc = c+dy[i];
        if(InRange(nr,nc)&&!visited[nr][nc] && paper[nr][nc]){
            dfs(nr,nc);
        }
    }
    return;
}

int main(){
    
    cin >> n >> m;
    paper.assign(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> paper[i][j];
        }
    }
    int max_area=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(paper[i][j]&&!visited[i][j]){
                cnt++;
                dfs(i,j);
                max_area = max(area,max_area);
                area=0;
            }
        }
    }
    if(cnt) cout << cnt << "\n"<< max_area;
    else cout << 0 << "\n" << 0;
    return 0;
}