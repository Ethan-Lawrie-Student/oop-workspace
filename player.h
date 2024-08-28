#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    string name;
    int health;
    int damage;

public:

    Player(string name, int health, int damage) {
        this-> name = name;
        this-> health = health;
        this-> damage = damage;
    }

    void attack();
    
};

#endif
