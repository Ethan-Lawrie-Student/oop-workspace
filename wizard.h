#ifndef WIZARD_H
#define WIZARD_H

#include <string>
#include <iostream>
#include "player.h"

class Wizard : public Player{
private:
    int mana;

public:
    Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage) {
        this->mana = mana;
    };

    void castSpell(Player* opponent){
        int manaAttack = (mana / 3) + rand() % mana;
        
        std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << manaAttack << " damage.\n";
        attack(opponent, manaAttack);
    }

    
};

#endif
