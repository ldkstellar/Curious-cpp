#include <iostream>
enum Direction { NORTH, EAST, SOUTH, WEST };

enum Direction dir = EAST;

int main(int argc, char const *argv[]) {
  std::cout << dir << std::endl;
  return 0;
}
