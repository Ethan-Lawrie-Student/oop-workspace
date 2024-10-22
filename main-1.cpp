
#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  std::tuple<int, int> returnedPos = Utils::generateRandomPos(5, 5);
  std::tuple<int, int> returnedPos2 = Utils::generateRandomPos(5, 5);

  std::cout << "Position X: " << std::get<0>(returnedPos)
            << "\nPosition Y: " << std::get<1>(returnedPos) << std::endl;

  std::cout << "For the second point: Position X: " << std::get<0>(returnedPos2)
            << "\nPosition Y: " << std::get<1>(returnedPos2) << std::endl;

  std::cout << "Distance between them: "
            << Utils::calculateDistance(returnedPos, returnedPos2) << std::endl;

  return 0;
}