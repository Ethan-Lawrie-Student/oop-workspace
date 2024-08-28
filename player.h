#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;
    int damage;

public:

    Player(std::string name, int health, int damage) {
        this-> name = name;
        this-> health = health;
        this-> damage = damage;
    }

    void attack(Player* opponent, int damage) {
        
        opponent->takeDamage(damage); 
    };
    void takeDamage(int damage){
        setHealth(getHealth() - damage);
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
        
    };

    int getHealth() {return health;};
    void setHealth(int newHealth) {
        health = newHealth;
    };

    int getDamage() {return damage;};
    void setDamage(int newDamage) {
        damage = newDamage;
    };

    std::string getName() {return name;};
    void setName(std::string newName) {
        name = newName;
    };

    
};

#endif
