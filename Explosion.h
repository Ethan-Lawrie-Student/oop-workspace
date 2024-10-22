#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

class Explosion : public GameEntity, public Effect {
 private:
  /* data */
 public:
  void move(int dx, int dy) {};
  Explosion() : GameEntity() {};
  Explosion(int x, int y) : GameEntity(x, y, ExplosionType) {};
  Explosion explode() { return Explosion(); };
  void apply(GameEntity& entity) {
    entity.position = std::make_tuple(-1, -1);
    entity.type = NoneType;
  };
};

#endif