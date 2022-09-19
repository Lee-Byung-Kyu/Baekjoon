#include <iostream>

int main(void){
  const int king = 1, queen = 1, rook = 2, bishop = 2, knight = 2, pawn = 8;
  int       k, q, r, b, kn, p;
  std::cin >> k >> q >> r >> b >> kn >> p;
  std::cout << king - k << ' ';
  std::cout << queen - q << ' ';
  std::cout << rook - r << ' ';
  std::cout << bishop - b << ' ';
  std::cout << knight - kn << ' ';
  std::cout << pawn - p;
  return (0);
}
