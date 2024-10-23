#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem
{
private:
    int width;
    int height;
    static int gridCount;
    int x;
    int y;
public:

    GridItem(int x, int y, int width, int height) : GridItem(){ 
        this->width = width;
        this->height = height;
        setCoordinates(x,y);

        };
    GridItem() : width(0), height(0) { GridItem::gridCount ++; };
    void setCoordinates(int x, int y) {
        this->x = x; 
        this->y = y;
        };
    std::pair<int,int> getCoordinates() {
        return std::make_pair(x,y);
    };
    int getGridWidth(){return width;};
    int getGridHeight(){return height;};
    int getActiveGridItemCount() {return GridItem::gridCount;};
    virtual ~GridItem() {GridItem::gridCount--;};


};

int GridItem::gridCount = 0;




#endif