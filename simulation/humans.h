#include <iostream>
#include <optional>

class person {
  public:
    int hands;
    int feet;
    int apples;
    int money{10};
    double height;
    int braincells;
    int food{0};

    void buyFood() {
      money--;
      food++;
    }
};
