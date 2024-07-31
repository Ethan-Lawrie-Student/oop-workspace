#include <iostream>
#include <string>

using namespace std;


void shift_right(int input) {

    int array[32];
    string newArray[32];

    int newint = 0;

    int index = 0;
    //extract the digits into array
    while (input > 0) {
        array[index] = input % 2;
        input = input / 2;
    }

    newArray[0] = to_string(array[0]);

    for(int i = 0; i < index - 1; i++) {
        newArray[i+1] = to_string(array[i]);
        
    }


    // newint = stoi(newArray);
    // for(int i = 0; i < index - 1; i++) {
    //     newint = newint * 10 + newArray[i];
        
    // }

    cout << newArray << endl;
    // return newArray;
}




int main() {
    shift_right(101);
    
    return 0;
}