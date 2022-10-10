#include <iostream>
#include <stack>
#include <string>
#include <cstring>

using namespace std;

int main(){
  int N;
  string command;
  stack<int> stack;

  cin >> N;
  for (int i = 0; i <= N; i++)
  {
    getline(cin, command);
    if (!strncmp(command.c_str(), "push", 4))
      stack.push(stoi(command.substr(5)));
    else if(!strcmp(command.c_str(), "pop")){
      if (stack.empty())
        cout << -1 << '\n';
      else{
        cout << stack.top() << '\n';
        stack.pop();
      }
    }
    else if (!strcmp(command.c_str(), "size"))
      cout << stack.size() << '\n';
    else if (!strcmp(command.c_str(), "top")){
      if (stack.empty())
        cout << -1 << '\n';
      else
        cout << stack.top() << '\n';
    }
    else if (!strcmp(command.c_str(), "empty"))
      cout << stack.empty() << '\n';
  }
  return (0);
}
