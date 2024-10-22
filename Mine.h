#ifndef MINE_H
#define MINE_H

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Utils.h"

class Mine : public GameEntity {
 private:
  /* data */
 public:
  Mine(int x, int y) : GameEntity(x, y, type = MineType) {};
  void move(int dx, int dy) {};
  Explosion explode() {
    Explosion newExplosion =
        Explosion(std::get<0>(position), std::get<1>(position));
    return newExplosion;
    type = NoneType;
  }
  void set_pos(std::tuple<int, int> pos) { position = pos; };
};

#endif