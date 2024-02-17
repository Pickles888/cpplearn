#include <iostream>

void decleration();
void include();   

int param(int x) {
  x--;
    return x;
}

int main() {
  int f{5};
  std::cout << param(f) << std::endl;
  decleration();
  include();
#if 0
  std::cout << "Not compiled :(";
#endif
    return 0;
}

void decleration() {
  std::cout << "DECLARATION" << std::endl;
}
