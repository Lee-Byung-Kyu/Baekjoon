#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
  int T, strlen;
  string str;
  stack<char> stack;

  cin >> T;
  for (int i = 0; i < T; i++){
    cin >> str;

    while (!str.empty()){
      if (str[0] == '(')
        stack.push('(');
      else if (str[0] == ')' && !stack.empty() && stack.top() == '(')
        stack.pop();
      else
        break;
      str = str.substr(1);
    }
    if (stack.empty() && str.empty())
      cout << "YES\n";
    else
      cout << "NO\n";
    while (!stack.empty())
      stack.pop();
  }
  return (0);
}
