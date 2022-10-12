#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int map[300][300];

int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};

int main(){
  int T, N, curX, curY, destX, destY;
  queue<pair<int, int> > Q;

  cin >> T;
  while (T--){
    for (int i = 0; i < 300; i++)
      for (int j = 0; j < 300; j++)
        map[i][j] = -1;
    cin >> N;
    cin >> curX >> curY;
    cin >> destX >> destY;
    Q.push(make_pair(curX, curY));
    map[curX][curY] = 0;
    while (!Q.empty()){
      pair<int, int> curr = Q.front();
      Q.pop();
      for (int dir = 0; dir < 8; dir++){
        int nx = curr.first + dx[dir];
        int ny = curr.second + dy[dir];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        if (map[nx][ny] >= 0) continue;
        map[nx][ny] = map[curr.first][curr.second] + 1;
        Q.push(make_pair(nx, ny));
      }
    }
    cout << map[destX][destY] << '\n';
  }
  return (0);
}
