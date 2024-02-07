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
}

void helloWorld() {
  std::cout << "Hello World" << '\n';
  std::cout << "Return Value: " << returnExpression() << '\n';
};

int main() {
  helloWorld();
  humans();
        return 0;
} 
