#include <iostream>

using namespace std;

bool equalsArray(int *numbers1,int *numbers2,int length) {
    bool isEqual = true;

    if(length < 1) {
        isEqual = false;
    } else {
        for (int i = 0; i < length; i++) {
            if(*(numbers1+i) != *(numbers2+i)) {
                // cout << *(numbers1+i) << ", " << *(numbers2+i) <<endl;
                isEqual = false;
            }
        }
    }
    
    return isEqual;
}