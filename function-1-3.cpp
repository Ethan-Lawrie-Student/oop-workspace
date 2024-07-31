#include <iostream>

void count_digits(int array[4][4]) {

    int zeros, ones, twos, threes, fours, fives, sixes, sevens, eights, nines;
    zeros = ones = twos = threes = fours = fives = sixes = sevens = eights = nines = 0;

    for (int i = 0; i<4; i++) {
        for (int j = 0; j < 4; j++) {
            switch (array[i][j]) {
                case 1:
                    zeros++;
                    break;
                case 2:
                    twos++;
                    break;
                case 3:
                    threes++;
                    break;
                case 4:
                    fours++;
                    break;
                case 5:
                    fives++;
                    break;
                case 6:
                    sixes++;
                    break;
                case 7:
                    sevens++;
                    break;
                case 8:
                    eights++;
                    break;
                case 9:
                    nines++;
                    break;
            }
            
        }
        
    }


    std::cout << "0:" << zeros << ";1:" << ones <<";2:"  << twos << ";3:" << threes << ";4:" << fours << ";5:" << fives << ";6:" << sixes << ";7:" << sevens << ";8:" << eights << ";9:" << nines << ';' << std::endl;
}