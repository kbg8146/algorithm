#include <iostream>
#include <queue>

using namespace std;
int m, n, h;

int dx[6] = {0, 1, 0, -1, 0, 0};
int dy[6] = {1, 0, -1, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int box[101][101][101];
int visited[101][101][101];
queue<tuple<int, int, int>> q;

bool InRange(int x, int y, int z) {
  return 0 <= x && x < n && 0 <= y && y < m && 0 <= z && z < h;
}

void bfs() {
  while (!q.empty()) {
    auto [x, y, z] = q.front();
    q.pop();
    for (int i = 0; i < 6; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      int nz = z + dz[i];
      if (InRange(nx, ny, nz) && box[nx][ny][nz] == 0 && !visited[nx][ny][nz]) {
        visited[nx][ny][nz] = 1;
        box[nx][ny][nz] = box[x][y][z] + 1;
        q.push({nx, ny, nz});
      }
    }
  }
}

int main() {

  cin >> m >> n >> h;
  for (int k = 0; k < h; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> box[i][j][k];
      }
    }
  }
  for (int k = 0; k < h; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (box[i][j][k] == 1) {
          q.push({i, j, k});
          visited[i][j][k];
        }
      }
    }
  }
  bfs();
  int max_old = -1;
  for (int k = 0; k < h; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (box[i][j][k] == 0) {
          cout << -1;
          return 0;
        }
        max_old = max(max_old, box[i][j][k]);
      }
    }
  }
  cout << max_old - 1;
  return 0;
}