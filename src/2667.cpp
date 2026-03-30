#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

vector<string> v;
vector<int> arr;
int visited[26][26];
int people;
int dr[4]={1,0,-1,0};
int dc[4]={0,1,0,-1};

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

void dfs(int r,int c,int cnt){
    visited[r][c]=1;
    people++;
    v[r][c]=cnt;
    for(int i=0;i<4;i++){
        int nr = r+dr[i];
        int nc = c+dc[i];
        if(InRange(nr,nc)&&!visited[nr][nc]&&v[nr][nc]=='1'){
            dfs(nr,nc,cnt);
        }
    }
}

int main(){

    cin >> n;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin  >> v[i];
    }    
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j]&&v[i][j]=='1'){
                cnt++;
                dfs(i,j,cnt);
                arr.push_back(people);
                people=0;
            }
        }
    }
    sort(arr.begin(),arr.end());
    cout << cnt << "\n";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << "\n";
    }
    

    return 0;
}