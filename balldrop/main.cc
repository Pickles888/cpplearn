#include <iostream>
#include <cmath>
#include "ball.h"

/*double round_up(double value, int decimal_places) {
    const double multiplier { std::pow(10.0, decimal_places) };
      return std::ceil(value * multiplier) / multiplier;
} */

double towerHeight(double var1) {
  // enter the tower's height and returns it
  std::cout << "\nEnter Tower Height\n" << ": ";
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
  double dist2 { 2 * var1 };
  double time { dist2 / var2 };
    return time;
}

int main() {
  Ball ball;
  // gets the mass of the ball
  ball.getMass();
//  ball.mass = round_up(ball.mass, 5);
  // gets the height of the tower
  double height { towerHeight(height) };
//  height = round_up(height, 5);
  // acceleration
  double accel { fallAccel(ball.mass) };
//  accel = round_up(accel, 5);
  //gets the amount of time falling
  double time { timeFalling(height, accel) }; 
  std::cout << "\nBall Fall Time: " << time << "\nBall Mass: " << round(ball.mass) << " " << ball.mass << "\nTower Height: " << height << "\nBall Acceleration: " << accel << std::endl;
    return 0;
}
