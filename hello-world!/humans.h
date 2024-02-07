#include <iostream>

class person {
  public:
    int hands;
    int feet;
    double height;
    int brain{0};
};

void humans() {
  person Holden;
  Holden.hands = 2;
  Holden.feet = 1;
  Holden.height = .1;
  std::cout << "Hands: " << Holden.hands << " Feet: " << Holden.feet << " Height: " << Holden.height << " Brain: " << Holden.brain << '\n';
};

