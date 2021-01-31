#include <iostream>

int main() {
  char c = 'a';
  int i = 0;
  while (i < 26) {
    std::cout << c;
    ++c;
    ++i;
  }
  std::cout << '\n';
}
