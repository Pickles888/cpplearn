#include <iostream>
#include <string>
#include <map>

class Peice {

  public:
   int xpos;
   int ypos;
   char letter;
   int side;

};

void clear() {
  system("clear");
}

int colors(std::string color) {

  std::map <std::string, int> colors = {{"black", 1}, {"red", 2}, {"green", 3}, {"yellow", 4}, {"blue", 5}, {"magenta", 6}, {"cyan", 7}, {"white", 8}};

    return colors[color] + 29;

}

int backgroundColor(int currentbgcolor, int currentp1color, int currentp2color) {

  std::string bgcolor;

  std::cout << "\nEnter Background Color 1\n" << "(black, red, green, yellow, blue, magenta, cyan, white): ";
  std::cin >> bgcolor;

  int bgid { colors(bgcolor) };

  // 29 is when no valid color is inputed
  if (bgid == 29) {
    std::cout << "\nInvalid Color" << std::endl;
    return currentbgcolor;
  }
  else if (currentp1color == bgid + 10) {
    std::cout << "\nColor Conflict: Color Inputed Is The Same As Player 1 Color" << std::endl;
    return currentbgcolor;
  }
  else if (currentp2color == bgid + 10) {
    std::cout << "\nColor Conflict: Color Inputed Is The Same As Player 2 Color" << std::endl;
    return currentbgcolor;
  }
  else {
    // Background Color is 10 more than Forground Color
    return bgid + 10; 
  }

}

int p1Color(int currentbgcolor, int currentp1color, int currentp2color) {

  std::string p1color;

  std::cout << "\nEnter Player 1 Color\n" << "(black, red, green, yellow, blue, magenta, cyan, white): ";
  std::cin >> p1color;
  int p1id { colors(p1color)};

  if (p1id == 29) {
    std::cout << "\nInvalid Player 1 Color" << std::endl;
    return currentp1color;
  }
  else if (p1id == currentbgcolor) {
    std::cout << "\nColor Conflict: Color Inputed Is The Same As Background Color" << std::endl;
    return currentp1color;
  }
  else if (p1id == currentp2color) {
    std::cout << "\nColor Conflict: Color Inputed Is The Same As Player 2 Color" << std::endl;
    return currentp1color;
  }
  else {
    return p1id;
  }

}

int p2Color(int currentbgcolor, int currentp1color, int currentp2color) {

  std::string p2color;

  std::cout << "\nEnter Player 2 Color\n" << "(black, red, green, yellow, blue, magenta, cyan, white): ";
  std::cin >> p2color;
  int p2id { colors(p2color)};

  if (p2id == 29) {
    std::cout << "\nInvalid Player 2 Color" << std::endl;
    return currentp2color;
  }
  else if (p2id == currentbgcolor) {
    std::cout << "\nColor Conflict: Color Inputed Is The Same As Background Color" << std::endl;
    return currentp2color;
  }
  else if (p2id == currentp1color) {
    std::cout << "\nColor Conflict: Color Inputed Is The Same As Player 1 Color" << std::endl;
    return currentp1color;
  }
  else {
    return p2id;
  }

}

class square {

  public:
    int xpos;
    int ypos;
    int color;
    int currentpiece;
  
};

int main() {
  std::cout << "\033[1;42;30m" << "Texting";
  //system("clear");
    return 0;
}
