#include <iostream>
#include <stack>

using namespace std;

int main(){
  int k, number, sum = 0;
  stack<int> stack;

  cin >> k;
  for (int i = 0; i < k; i++){
    cin >> number;

    if (number)
      stack.push(number);
    else
      stack.pop();
  }

  while (!stack.empty()){
    sum += stack.top();
    stack.pop();
  }
  cout << sum << '\n';
  return (0);
}
