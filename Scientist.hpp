#ifndef SCIENTIST_HPP
#define SCIENTIST_HPP

#include <utility>
#include "GridItem.hpp"



class Scientist: public GridItem
{
private:
    int experimentCount;
public:
    Scientist(int gridWidth, int gridHeight): GridItem(0,0,gridWidth,gridHeight), experimentCount(0) {};
    Scientist(){};
    int getExperimentCount() {return experimentCount;};// gets the current number of experiment stations the scientist has visited
    void runExperiment() {experimentCount++;} // increments the number of experiment stations the scientist has visited
    bool move(int xOffset, int yOffset) {
        if(xOffset > 2|| yOffset > 2) {
            return false;
        }

        std::pair<int,int> curPos = getCoordinates();

        int nextPosX = curPos.first + xOffset;
        int nextPosY = curPos.second + yOffset;

        if(nextPosX >= getGridWidth() || nextPosY >= getGridHeight()) {
            return false;
        } else {
            setCoordinates(nextPosX, nextPosY);
            return true;
        }
    }

};





#endif