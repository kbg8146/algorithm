#include <iostream>
#include <queue>

using namespace std;

char alp[101][101];

queue<pair<int, int>> q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int visited[101][101];
int n;
int InRange(int x, int y) { return 0 <= x && x < n && 0 <= y && y < n; }

// 큐에 넣고 큐가 빌때까지 반복
// 4방향 모두 검사
// if(이전 alp이랑 같으면 방문 ,visited, 큐에 넣기)
void bfs(int a, int b) {
  q.push({a, b});
  visited[a][b] = 1;
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (InRange(nx, ny) && !visited[nx][ny] && alp[x][y] == alp[nx][ny]) {
        visited[nx][ny] = 1;
        q.push({nx, ny});
      }
    }
  }
}

int main() {

  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> alp[i][j];
    }
  }

  int ncnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!visited[i][j]) {
        bfs(i, j);
        ncnt++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      visited[i][j] = 0;
      if (alp[i][j] == 'G')
        alp[i][j] = 'R';
    }
  }

  int ycnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!visited[i][j]) {
        bfs(i, j);
        ycnt++;
      }
    }
  }
  cout << ncnt << " " << ycnt;
  return 0;
}