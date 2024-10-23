#include "Helper.hpp"
#include "GridItem.hpp"
#include <iostream>


int main() {
    GridItem grid1(2,3,4,4);
    GridItem grid2(3,4,4,4);

    int dist = Helper::manhattanDistance(grid1.getCoordinates(), grid2.getCoordinates());

    std::cout << "Distance is: " << dist << std::endl;

    return 0;
}