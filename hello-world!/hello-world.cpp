#include <iostream>
using namespace std;

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
  cout << "Hands: " << Holden.hands << " Feet: " << Holden.feet << " Height: " << Holden.height << " Brain: " << Holden.brain << '\n';
};

void helloWorld() {
	cout << "Hello World" << '\n';
}

int main() {
  helloWorld();
  humans();
        return 0;
}
