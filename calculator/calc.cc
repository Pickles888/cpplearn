#include <iostream>
#include <cmath>

double calculate(double n1, double n2, char op) {
  
  std::string fail;

  switch (op) { 
    case '+':
      return n1 + n2;
    case '-':
      return n1 - n2;
    case '^':
      return pow(n1, n2);
    case '/': 
      return n1 / n2;
    case '*':
      return n1 * n2;
  }
  return 0;
}

int main() {
  
  double num1, num2;
  char op;

  std::cout << "Enter Number 1" << '\n' << ": " << std::endl;
  std::cin >> num1;

  std::cout << "Enter Number 2" << ": " << std::endl;
  std::cin >> num2;

  std::cout << "Calculate With (*|/|^|+|-)" << ": " << std::endl;
  std::cin >> op;
  
  std::cout << "Answer: " << calculate(num1, num2, op);
  
    return 0;
}
