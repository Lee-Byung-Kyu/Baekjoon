#include <iostream>

int main(void){
  int total_price, total_count;
  int price, count;

  std::cin >> total_price;
  std::cin >> total_count;
  for (int i = 0; i < total_count; i++){
    std::cin >> price >> count;
    total_price -= price * count;
  }
  if (total_price)
    std::cout << "No";
  else
    std::cout << "Yes";
  return (0);
}
