#include <iostream>
#include <string>

using namespace std;


int shift_right(int input) {

    int array[32], newArray[32];

    int newint = 0;

    int index = 0;
    //extract the digits into array
    while (input > 0) {
        array[index] = input % 2;
        input = input / 2;
    }

    newArray[0] = array[0];

    for(int i = 0; i < index - 1; i++) {
        newArray[i+1] = array[i];
        
    }

    for(int i = 0; i < index - 1; i++) {
        newint = newint * 10 + newArray[i];
        
    }
    return newint;
}




int main() {
    cout << shift_right(101) << endl;
    
    return 0;
}