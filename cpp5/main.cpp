#include <iostream>

int main() {
  int x;

  do {
    std::cout << "正の整数値：";
    std::cin >> x;
  } while (x <= 0);

  while (x >= 0) {
    std::cout << x << std::endl;
    --x;
  }
}
