#ifndef EXPERIMENT_HPP
#define EXPERIMENT_HPP

#include <utility>
#include "Interactable.hpp"
#include "Helper.hpp"


class Experiment: public Interactable
{
private:
public:
    Experiment(int x, int y,int width, int height) : Interactable(x,y, width, height) {};
    bool interact(Scientist* player) {

        int dist = Helper::manhattanDistance(this->getCoordinates(), player->getCoordinates());

        if(dist == 0) {
            player->runExperiment();
        }

        if(player->getExperimentCount() > 3 && dist == 0) {
            return true;
        } else {
            return false;
        }
    }
    InteractableType getType() {
        return InteractableType::EXPERIMENT;
    };

    
};


#endif