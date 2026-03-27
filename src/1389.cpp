#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <climits>
using namespace std;
int n, m;
vector<vector<int>> graph;

queue<int> q;
int visited[101];
int sum=0;

void bfs(int person){
    sum=0;
    for(int i=1;i<=n;i++){
        visited[i]=0;
    }
    visited[person]=1;
    q.push(person);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++){
            int next = graph[x][i];
            if(!visited[next]){
                visited[next]=visited[x]+1;
                q.push(next);
                sum+=visited[next]-1;
            }
        }
    }
}
int main(){
    cin >> n >> m;
    graph.assign(n+1,vector<int>(0));
    for(int i=0;i<m;i++){
        int x=0,y=0;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        bfs(i);
        v.push_back({sum,i});
    }
    sort(v.begin(),v.end());

    cout << v[0].second;
    
    
    return 0;
}