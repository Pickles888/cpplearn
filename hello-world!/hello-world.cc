#include <iostream>
#include "humans.h"

void humans() {
  person Holden;
  Holden.hands = 2;
  Holden.feet = 1;
  Holden.height = .1;
  std::cout << "Hands: " << Holden.hands << " Feet: " << Holden.feet << " Height: " << Holden.height << " Brain: " << Holden.brain << '\n';
};

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
  humans();
  int x, y;
  std::cout << '\n' << "input num1: ";
  std::cin >> x;
  std::cout << '\n' << "input num2: ";
  std::cin >> y;
  std::cout << functionParams(x, y);
        return 0;
} 
