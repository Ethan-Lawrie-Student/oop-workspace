#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include <iostream>
#include "player.h"

class Warrior : public Player{
private:
    std::string weapon;

public:
    Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage) {
        this->weapon = weapon;
    };

    void swingWeapon(Player* opponent){
        int randAttack = (getDamage() / 2) + rand() % getDamage();
        
        std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
        attack(opponent, randAttack);
    }

    
};

#endif
