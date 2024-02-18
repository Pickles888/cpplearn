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
      std::cout << "\nEnter Ball Radius\n" << ": ";
      std::cin >> radius;
      double rpi { radius * 3.14 };
      double rpicubed { pow(rpi, 3) };
      std::cout << "RPICUBED: " << rpicubed << std::endl;
      double volume { 1.3 * rpicubed };
      std::cout << "VOLUME: " << volume;
      // gets the density
      std::cout << "\nEnter Ball Density\n" << ": ";
      std::cin >> density;
      // uses the density and volume to get the mass
      double mass { density * volume };
      std::cout << mass;
    }

};

#endif
