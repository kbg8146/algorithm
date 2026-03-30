#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

vector<vector<int>> graph;    
queue<int> q;
map<int,int>m;
int visited[100001];

void bfs(int r){
    visited[r]=1;
    q.push(r);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            int next = graph[x][i];
            if(!visited[next]){
                q.push(next);
                m[next]=x;
                visited[next]=1;
            }
        }
    }
}

int main(){

    int n;
    cin >> n;
    int a, b;
    graph.resize(n+1);
    for(int i=0;i<n-1;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
    for(int i=2;i<=n;i++){
        cout << m[i] << "\n";
    }

    return 0;
}