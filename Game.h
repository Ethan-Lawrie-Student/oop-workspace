#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

class Game {
 private:
  std::vector<GameEntity*> entities;

 public:
  Game(/* args */);
  ~Game();

  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    for (int i = 0; i < numShips; i++) {
      Ship* newShip = new Ship(0, 0);
      newShip->set_pos(Utils::generateRandomPos(gridWidth, gridHeight));
      entities.push_back(newShip);
    }

    for (int i = 0; i < numMines; i++) {
      Mine* newMine = new Mine(0, 0);
      newMine->set_pos(Utils::generateRandomPos(gridWidth, gridHeight));
      entities.push_back(newMine);
    }

    return entities;
  };
  std::vector<GameEntity*> get_entities() { return entities; };
  void set_entities() {
    //
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    for (int i = 0; i < maxIterations; i++) {
      for (int j = 0; j < entities.size(); j++) {
        entities[j]->move(1, 0);
      }
      for (int j = 0; j < entities.size(); j++) {
        for (int k = j; k < entities.size(); k++) {
          if (entities[j]->getType() == ShipType &&
              entities[k]->getType() == MineType &&
              Utils::calculateDistance(entities[j]->getPos(),
                                       entities[k]->getPos()) <
                  mineDistanceThreshold) {
            Explosion newExplosion = entities[k]->explode();
            newExplosion.apply(*entities[j]);
            std::cout << "Ship has been hit!" << std::endl;
          }
        }
      }
    }
  };
};

Game::Game(/* args */) {}

Game::~Game() {}

#endif