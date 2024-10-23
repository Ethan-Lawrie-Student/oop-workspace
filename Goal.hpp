#ifndef GOAL_HPP
#define GOAL_HPP

#include <utility>
#include "Interactable.hpp"
#include "Helper.hpp"
#include <iostream>


class Goal: public Interactable
{
private:
public:
    Goal(){};
    Goal(int width, int height) : Interactable(width-1, height-1, width, height) {};
    bool interact(Scientist* player) {
        std::cout << "Distance: " << Helper::manhattanDistance(this->getCoordinates(), player->getCoordinates()) << std::endl;
        if(player->getExperimentCount() >= 1 && Helper::manhattanDistance(this->getCoordinates(), player->getCoordinates()) == 0) {
            std::cout << "END" << std::endl;
            return true;
        } else {
            return false;
        }
    }
    InteractableType getType() {
        return InteractableType::GOAL;
    };

    
};


#endif