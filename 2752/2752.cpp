#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a, b, c;
  int arr[3];

  cin >> a >> b >> c;
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  sort(arr, arr + 3);
  cout << arr[0] << ' ' << arr[1] << ' ' << arr[2];
  return (0);
}