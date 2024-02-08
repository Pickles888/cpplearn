#include <iostream>

/* void humanSimulation() {
  person Simulated;
  std::cout << name.money;
}; */

int returnExpression() {
  int x{6};
    return x;
};

int functionParams(int x, int y) {
  return x + y;
};

void helloWorld() {
  std::cout << "Hello World" << '\n';
  std::cout << "Return Value: " << returnExpression() << '\n';
};

int main() {
  helloWorld();
  int x, y;
  std::cout << '\n' << "input num1: ";
  std::cin >> x;
  std::cout << '\n' << "input num2: ";
  std::cin >> y;
  std::cout << functionParams(x, y);
        return 0;
} 
