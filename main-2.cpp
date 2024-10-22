
#include <iostream>
#include <tuple>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

int main() {
  Ship ship1 = Ship(2, 3);
  Mine mine1 = Mine(2, 4);

  Explosion explosion1 = mine1.explode();

  explosion1.apply(ship1);

  return 0;
}