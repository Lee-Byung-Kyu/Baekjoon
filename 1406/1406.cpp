#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
  list<char> list;
  string str, cmd;
  int size, M;

  cin >> str;
  size = str.size();
  for (int i = 0; i < size; i++)
    list.push_back(str[i]);
  std::list<char>::iterator iter = list.end();

  cin >> M;
  for (int i = 0; i <= M; i++){
    getline(cin, cmd);
    if (cmd[0] == 'L' && iter != list.begin())
      --iter;
    else if (cmd[0] == 'D' && iter != list.end())
      ++iter;
    else if (cmd[0] == 'B' && iter != list.begin()){
      iter--;
      iter = list.erase(iter);
    }
    else if (cmd[0] == 'P')
      list.insert(iter, cmd[2]);
  }
  for (std::list<char>::iterator iter = list.begin(); iter != list.end(); iter++)
    cout << *iter;
  return (0);
}
