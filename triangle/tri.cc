#include <iostream>
#include <cmath>

void rightTri(int rows) {

  for (int i = 0; i <= rows; i++) {
    for (int nums = 0; nums <= i; nums++) {
      std::cout << "*";
    }
    std::cout << '\n';
  }

}

void equalTri(int rows) {

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

int main() {
  
  int rows;
  char choice;

  std::cout << "How many rows?" << '\n' << ": ";
  std::cin >> rows;
  std::cout << '\n';
  
  std::cout << "What Triangle" << '\n' << "(e/r): ";
  std::cin >> choice;
  std::cout << '\n';


  if (choice == 'e') {
    equalTri(rows);
  }
  else if (choice == 'r') {
    rightTri(rows);
  }
  else {
    std::cout << "Invalid Choice" << std::endl;
  }

}
