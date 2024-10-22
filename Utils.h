#ifndef UTILS_H
#define UTILS_H

#include <math.h>

#include <tuple>

class Utils {
 private:
  /* data */
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int randX = rand() % gridWidth;
    int randY = rand() % gridHeight;
    std::tuple<int, int> returnTuple(randX, randY);
    return returnTuple;
  };
  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    double dist = sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) +
                       pow(std::get<1>(pos2) - std::get<1>(pos2), 2));
    return dist;
  };
};

#endif