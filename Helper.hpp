#ifndef HELPER_HPP
#define HELPER_HPP

#include <utility>
#include <math.h>

class Helper
{
private:
    
public:
    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        return abs(item1.first - item2.first) + abs(item1.second - item2.second);
    };
};




#endif
