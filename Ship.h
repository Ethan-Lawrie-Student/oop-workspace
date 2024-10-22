#ifndef SHIP_H
#define SHIP_H

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

class Ship : public GameEntity {
 private:
  /* data */
 public:
  Ship(int x, int y) : GameEntity(x, y, ShipType) {};
  void move(int dx, int dy) {
    position =
        std::make_tuple(std::get<0>(position) + dx, std::get<1>(position) + dy);
  }
  void set_pos(std::tuple<int, int> pos) { position = pos; };
  Explosion explode() {};
};

#endif