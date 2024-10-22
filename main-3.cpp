
#include <iostream>
#include <tuple>

#include "Effect.h"
#include "Explosion.h"
#include "Game.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

int main() {
  Game theGame;
  theGame.initGame(5, 2, 5, 5);
  theGame.gameLoop(10, 1);

  return 0;
}