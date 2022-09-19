#include <iostream>

int main(void){
  int first, second, third, max;

  std::cin >> first >> second >> third;
  if (first == second && first == third)
    std::cout << 10000 + 1000 * first;
  else if (first == second)
    std::cout << 1000 + first * 100;
  else if (second == third)
    std::cout << 1000 + second * 100;
  else if (third == first)
    std::cout << 1000 + third * 100;
  else{
    max = first;
    if (second > max)
      max = second;
    if (third > max)
      max = third;
    std::cout << 100 * max;
  }
  return (0);
}
