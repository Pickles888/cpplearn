#include <iostream>
#include <optional>

class person {
  public:
    int money;
    int food;
    int energy;
    int meletonin;

    /* ~Actions~ */
    void buyFood() {
      money--;
      food++;
      energy--;
    }

    void work() {
      money++;
      energy--;
      energy--;
    }

    void rest() {
      if (meletonin > 0) {
        energy++;
      }
    }

    void sellFood() {
      food--;
      money++;
      energy--;
    }
};
