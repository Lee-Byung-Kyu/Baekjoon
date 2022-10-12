#include <iostream>
#include <string>
#include <queue>
#include <utility>

using namespace std;

char map[100][100];
char map2[100][100];
int vis[100][100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int N;

int bfs(int x, int y){
  queue<pair<int, int> > Q;
  char c = map[x][y];
  Q.push(make_pair(x, y));
  vis[x][y] = 1;
  while (!Q.empty()){
    pair<int, int> curr = Q.front();
    Q.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = curr.first + dx[dir];
      int ny = curr.second + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
      if (vis[nx][ny] || map[nx][ny] != c) continue;
      vis[nx][ny] = 1;
      Q.push(make_pair(nx, ny));
    }
  }
  return (0);
}

int bfs2(int x, int y){
  queue<pair<int, int> > Q;
  char c = map2[x][y];
  Q.push(make_pair(x, y));
  vis[x][y] = 1;
  while (!Q.empty()){
    pair<int, int> curr = Q.front();
    Q.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = curr.first + dx[dir];
      int ny = curr.second + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
      if (vis[nx][ny] || map2[nx][ny] != c) continue;
      vis[nx][ny] = 1;
      Q.push(make_pair(nx, ny));
    }
  }
  return (0);
}

int main(){
  int count1 = 0, count2 = 0;
  string str;

  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> str;
    for (int j = 0; j < N; j++){
      map[i][j] = str[j];
      if (str[j] == 'G')
        map2[i][j] = 'R';
      else
        map2[i][j] = str[j];
    }
  }

  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if (!vis[i][j]){
        bfs(i, j);
        count1++;
      }
    }
  }
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      vis[i][j] = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if (!vis[i][j]){
        bfs2(i, j);
        count2++;
      }
    }
  }
  cout << count1 << ' ' << count2 << '\n';
  return (0);
}
