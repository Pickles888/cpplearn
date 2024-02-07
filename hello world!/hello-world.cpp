#include <iostream>
using namespace std;

class person {
  public:
    int hands;
    int feet;
    double height;
    int brain{ 1 };
};

void humans() {
  person Holden;
  Holden.hands = 2;
  Holden.feet = 1;
  Holden.height = .1;
  cout << "Hand(s): " << Holden.hands << " F(ee/oo)t: " << Holden.feet << " Height: " << Holden.height << " Brain(s): " << Holden.brain << '\n';
};

void helloWorld() {
	cout << "Hello World" << '\n';
}

int main() {
  helloWorld();
  humans();
        return 0;
}
