#include <iostream>
#include <queue>
#include <utility>

using namespace std;

bool board[50][50] = {0};
bool vis[50][50] = {false};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int M, N, K;


int bfs(int x, int y){
  queue<pair<int, int> > Q;
  vis[x][y] = 1;
  Q.push(make_pair(x, y));
  while (!Q.empty()){
    pair<int, int> curr = Q.front();
    Q.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = curr.first + dx[dir];
      int ny = curr.second + dy[dir];
      if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if(vis[nx][ny] || board[nx][ny] != 1) continue;
      vis[nx][ny] = 1;
      Q.push(make_pair(nx, ny));
    }
  }
  return (0);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--){
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        board[i][j] = vis[i][j] = 0;
    int posX, posY, cnt = 0;
    cin >> M >> N >> K;
    while (K--){
      cin >> posX >> posY;
      board[posY][posX] = 1;
    }

    for (int i = 0; i < N; i++){
      for (int j = 0; j < M; j++){
        if (board[i][j] == 1 && !vis[i][j]){
          cnt++;
          bfs(i, j);
        }
      }
    }
    cout << cnt << '\n';
  }
  return (0);
}
