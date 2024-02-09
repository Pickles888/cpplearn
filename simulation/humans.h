#include <iostream>
#include <optional>

class person {
  public:
    int money{10};
    int food{2};
    int energy{5};
    int meletonin{5};

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
