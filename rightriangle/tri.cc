#include <iostream>
#include <cmath>

void rightTri(int rows) {

  std::cout << "How many rows?" << '\n' << ": ";
  std::cin >> rows;
  std::cout << '\n';

  for (int i = 0; i <= rows; i++) {
    for (int nums = 0; nums <= i; nums++) {
      std::cout << "*";
    }
    std::cout << '\n';
  }

}

int main() {
  
  int rows;
  int nums {0};
  int temp;

  std::cout << "How many rows?" << '\n' << ": ";
  std::cin >> rows;
  std::cout << '\n';

  for (int i = 0; i < rows; i++) {
    for (int s = 0; s < rows - i; s++) {
      std::cout << " ";
    }
    for (int nums = 0; nums < i*2 + 1; nums++) {
      std::cout << "*";
    }
    std::cout << '\n';
  }

}
