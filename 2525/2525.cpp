#include <iostream>

int main(void){
  int current_hour, current_minute;
  int needed_minute;

  std::cin >> current_hour >> current_minute;
  std::cin >> needed_minute;

  current_hour += needed_minute / 60;
  current_minute += needed_minute % 60;
  if (current_minute >= 60){
    current_hour++;
    current_minute -= 60;
  }
  std::cout << current_hour % 24 << ' ' << current_minute;
  return (0);
}
