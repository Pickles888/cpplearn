#include <iostream>
#include <cmath>
#include "ball.h"

double towerHeight(double var1) {
  // enter the tower's height and returns it
  std::cout << "\nEnter Tower Height\n" << "(m): ";
  std::cin >> var1;
    return var1;
}

double fallAccel(double var1) {
  // finds the acceleration
  double accel { 9.80665 / var1 };
    return accel;
} 

double timeFalling(double var1, double var2) {
  // gets time 
  double time { 2 * var1 / var2 };
    return time;
}

int main() {
  Ball ball;
  // gets the mass of the ball
  ball.getMass();
  // gets the height of the tower
  double height { towerHeight(height) };
  // acceleration
  double accel { fallAccel(ball.mass) };
  //gets the amount of time falling
  double time { timeFalling(height, accel) }; 
  std::cout << "\nBall Fall Time: " << time << "\nBall Mass: " << ball.mass << "\nBall Acceleration: " << accel << std::endl;
    return 0;
}
