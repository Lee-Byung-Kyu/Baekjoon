#include <iostream>
#include <queue>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, x;
  string str;
  queue<int> Q;

  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> str;
    if (str == "push"){
      cin >> x;
      Q.push(x);
    }
    else if (str == "pop"){
      if (Q.empty())
        cout << "-1\n";
      else{
        cout << Q.front() << '\n';
        Q.pop();
      }
    }
    else if (str == "size")
      cout << Q.size() << '\n';
    else if (str == "empty")
      cout << Q.empty() << '\n';
    else{
      if (Q.empty())
        cout << "-1\n";
      else if (str == "front")
        cout << Q.front() << '\n';
      else
        cout << Q.back() << '\n';
    }
  }
  return (0);
}
