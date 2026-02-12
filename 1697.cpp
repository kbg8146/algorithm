#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> v;
vector<int> visited;
queue<int> q;
int n,k;
int path;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;   
    v.resize(200002);
    visited.resize(200002);
    for(int i=0;i<100001;i++){
        v[i].push_back(2*i);
        v[i].push_back(i+1);
        v[i].push_back(i-1);
    }

    q.push(n);
    visited[n]=1;
    if(n==k){
        cout << 0;
        return 0;
    }
    else if(n>k){
        cout << n-k;
        return 0;
    }
    while(!q.empty()){
        int cnt = q.size();
        path++;
        for(int j=0;j<cnt;j++){
            int x = q.front();
            q.pop();
            for(int i=0;i<v[x].size();i++){
                int next = v[x][i];
                if(next == k){
                    cout << path;
                    return 0;
                }
                if(next>=0 && next<=100000 && !visited[next]){
                    visited[next]=1;
                    q.push(next);
                }
            }
        }

    }

    return 0;
}