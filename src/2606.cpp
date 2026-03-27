#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[101];
queue<int> q;

int visited[101];
int cnt;

void bfs(int n){
    q.push(n);
    visited[n]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            int next = graph[x][i];
            if(!visited[next]){
                visited[next]=1;
                q.push(next);
                cnt++;
            }
        }
    }
}

int main(){

    int computer, n;
    cin >> computer >> n;

    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
    cout << cnt;
    return 0;
}