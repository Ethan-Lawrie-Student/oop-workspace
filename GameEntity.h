#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class Explosion;

enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

class GameEntity {
 public:
  std::tuple<int, int> position;
  GameEntityType type;

 public:
  GameEntity() {};
  GameEntity(int x, int y, GameEntityType type);
  std::tuple<int, int> getPos() { return position; };
  GameEntityType getType() { return type; };  // Returns the type of the entity.
  virtual void move(int dx, int dy) = 0;
  virtual Explosion explode() = 0;
};

GameEntity::GameEntity(int x, int y, GameEntityType type) {
  position = std::make_tuple(x, y);
  this->type = type;
};

#endif