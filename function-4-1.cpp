#include <iostream>

using namespace std;




int *readNumbers(){
    int *numArray = new int[10];
    for(int i = 0; i < 10; i++){
        cin >> numArray[i];
    }

    return numArray;
    
}


int secondSmallestSum(int *numbers,int length){
    int arrLength = (length * (length+1))/2;
    cout << "Works" << endl;
    
    int sumArray[arrLength];
    int index;

cout << "Works" << endl;
    for (int i = 0; i < length; i++) {
        for(int j = 0; j < length-i; j++) {
            int sum = 0;
            for (int k = j; k < j+i; k++) {
                sum += numbers[k];
            }
            sumArray[index] = sum;
            index++;
        }
    }
    cout << "Works" << endl;

    for (int i = 0; i < arrLength; i++) {
        cout << sumArray[i]<< ", ";
    }

    return 3;
}