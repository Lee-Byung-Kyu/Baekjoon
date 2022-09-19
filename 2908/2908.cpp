#include <iostream>

int main(void){
  int num1, num2;
  int res1 = 0;
  int res2 = 0;

  std::cin >> num1 >> num2;
  res1 = num1 / 100 + ((num1 / 10) % 10) * 10 + ((num1 % 100) % 10) * 100;
  res2 = num2 / 100 + ((num2 / 10) % 10) * 10 + ((num2 % 100) % 10) * 100;
  if (res1 > res2)
    std::cout << res1;
  else
    std::cout << res2;
  return (0);
}
