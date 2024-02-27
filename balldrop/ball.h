#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <cmath>

class Ball {
public:
    double mass;
    double radius;
    double density;

    void getMass() {
      // gets the radius
      std::cout << "\nEnter Ball Radius\n" << "(m): ";
      std::cin >> radius;
      double volume { (4/3) * pow(radius * 3.14, 3) };
      // gets the density
      std::cout << "\nEnter Ball Density\n" << ": ";
      std::cin >> density;
      // uses the density and volume to get the mass
      mass = density * volume;
    }

};

#endif
