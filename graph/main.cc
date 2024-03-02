#include <curses.h>
#include <iostream>
#include <cmath>
#include <ncurses.h>

std::string cToStr(char x) {

  std::string s(1, x);

    return s;
}

class Point {

  public:
    double xpos;
    double ypos;
    char name;

    void setX() {

      std::cout << "Enter x Coordinate For Point " << name << '\n' << ": ";
      std::cin >> xpos;
      std::cout << '\n';

    }

    void setY() {

      std::cout << "Enter y Coordinate For Point " << name << '\n' << ": ";
      std::cin >> ypos;
      std::cout << '\n';

    }

    void print() {
      
      erase();

      move(xpos, ypos);
      printw("X");
      
      refresh();
      endwin();
    }

};

int main() {

  Point x;

//  x.setX();
//  x.setY();
  
  initscr();
  
  clear();
  refresh();

  x.print();

  endwin();

}




/* TO DO:
 *
 * Be able to set points~ 
 * Graph points
 * Create line (interpolate)
 * Use Equasion to make graph
 *
 */
