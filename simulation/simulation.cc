#include <iostream>
#include <string>
#include "humans.h"
using namespace std;

void command() {
  person Simulated;
  string cmd;
  getline(cin, cmd);
  while (Simulated.food > 0) {
    if (cmd == "do work") {
      cout << "it worked :)";
    }
  }
}

int main() {
  person Simulated;
  command();
}
