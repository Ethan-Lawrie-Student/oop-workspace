#include "Helper.hpp"
#include "GridItem.hpp"
#include "Scientist.hpp"
#include "Experiment.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"

#include <iostream>


int main() {
    // GridItem grid1(2,3,4,4);
    Scientist science(4,4);

    science.runExperiment();
    science.runExperiment();
    science.runExperiment();
    science.runExperiment();

    Goal  endGoal(4,4);
    endGoal.interact(&science);

    science.move(1,0);
    science.move(1,0);
    science.move(1,0);
    science.move(1,0);

    endGoal.interact(&science);


     science.move(0,1);
    science.move(0,1);
    science.move(0,1);

    endGoal.interact(&science);

    // int dist = Helper::manhattanDistance(grid1.getCoordinates(), grid2.getCoordinates());


    return 0;
}