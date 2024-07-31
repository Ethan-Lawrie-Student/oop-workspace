#include <iostream>
#include <string>

using namespace std;


int to_base2(int input) {
    int array[32];
    string str;
    int current = input;

    int index = 0;

    while(current > 0) {
        array[index] = current % 2;

        current = current / 2;

        index++;
    } 

    for (int i = index - 1; i>=0; i--) {
        // cout << array[i] << endl;
        str = str + to_string(array[i]);
    }

    int finalNum = stoi(str);

    return finalNum;
    
}


int main() {

    
    cout << to_base2(12) << endl;
    return 0;
}