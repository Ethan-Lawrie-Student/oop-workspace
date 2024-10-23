#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include <utility>
#include "GridItem.hpp"
#include "Scientist.hpp"

enum InteractableType {GOAL, EXPERIMENT};


class Interactable: public GridItem
{
private:
    static int interCount; 
    
public:
    Interactable(): GridItem(0,0,0,0) {
        interCount++;
    };
    Interactable(int x, int y, int width, int height): GridItem(x,y,width,height) {
        interCount++;
    };

    virtual bool interact(Scientist* player) = 0;
    virtual InteractableType getType() = 0;
    int getActiveInteractableCount() {
        return interCount;
    }

    ~Interactable() {
        interCount--;
    }

    
};

int Interactable::interCount = 0;




#endif