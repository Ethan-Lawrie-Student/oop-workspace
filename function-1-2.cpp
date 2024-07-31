#include <iostream>

int is_identity(int array[10][10]) {
    int identity = 1;

    for (int i = 0; i<10; i++) {
        for (int j = 0; j < 10; j++) {
            if(i == j) {
                
                if (array[i][j] != 1) {
                    identity = 0;
                }
            } else {
                if (array[i][j] != 0) {
                    identity = 0;
                }
            }
            
            
        }
        
    }

    return identity;
}