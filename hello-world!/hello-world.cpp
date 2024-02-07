#include <iostream>
#include "humans.h"

void humans() {
  person Holden;
  Holden.hands = 2;
  Holden.feet = 1;
  Holden.height = .1;
  std::cout << "Hands: " << Holden.hands << " Feet: " << Holden.feet << " Height: " << Holden.height << " Brain: " << Holden.brain << '\n';
};


void helloWorld() {
  std::cout << "Hello World" << '\n';
};

int main() {
  helloWorld();
  humans();
        return 0;
}
