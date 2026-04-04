#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int arr[101][101];
int ans[101][101];

queue<int> q;
vector<vector<int>> graph;

int bfs(int start, int end) {
  int visited[101] = {0};
  q.push(start);
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int i = 0; i < graph[x].size(); i++) {
      int next = graph[x][i];
      if (!visited[next]) {
        if (next == end) {
          while (!q.empty())
            q.pop();
          return 1;
        } else {
          q.push(next);
          visited[next] = 1;
        }
      }
    }
  }
  return 0;
}

int main() {

  int n;
  cin >> n;
  graph.resize(n + 1);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 1) {
        graph[i].push_back(j);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (bfs(i, j)) {
        ans[i][j] = 1;
      } else {
        ans[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}