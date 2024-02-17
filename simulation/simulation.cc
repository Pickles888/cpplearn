#include <iostream>
#include <string>
#include "humans.h"
using namespace std;

void simPerson(person& Simulated) {
  Simulated.money = 5;
  Simulated.food = 2;
  Simulated.energy = 5;
  Simulated.meletonin = 5;
}

void command() {
  simPerson(Simulated);
  string cmd;
  getline(cin, cmd);
  if (cmd == "do work") {
      cout << Simulated.food;
  }
}

int main() {
  while (Simulated.food > 0) {
    Simulated.food--;
    command();
  }
    return 0;
}

