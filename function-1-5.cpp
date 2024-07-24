#include <iostream>
#include <cmath>

int count_evens(int number) {
    int evenCount;

    evenCount = 0;

    if(!(number<1)) {
        for(int i = 1; i <= number; i++) {
            if(remainder(i,2)==0) {
                evenCount++;
            }
        }
    }

    return evenCount;
}