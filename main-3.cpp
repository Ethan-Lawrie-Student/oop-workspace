#include "Helper.hpp"
#include "GridItem.hpp"
#include "Scientist.hpp"
#include "Experiment.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"
#include "Game.hpp"

#include <utility>
#include <vector>

#include <iostream>


int main() {
    // GridItem grid1(2,3,4,4);
    std::pair<int, int> experimentLoc1 = std::make_pair(2,1); 
    std::pair<int, int> experimentLoc2 = std::make_pair(1,3); 

    std::vector<std::pair<int, int>> exVector;
    exVector.push_back(experimentLoc1);
    exVector.push_back(experimentLoc2);

    Game game(4,4,exVector);


    game.movePlayer(1,0);

    game.movePlayer(1,0);

    game.movePlayer(1,0);

    game.movePlayer(1,0);

    game.movePlayer(1,0);
    // int dist = Helper::manhattanDistance(grid1.getCoordinates(), grid2.getCoordinates());


    return 0;
}