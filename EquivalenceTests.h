#ifndef EQUIVTEST_H
#define EQUIVTEST_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
        testMixedSignIntegers();
        testZeros();
        testLargePositiveIntegers();
        testLargeNegativeIntegers();
        testSpecialCases();


    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }


    void testMixedSignIntegers() {
        Addition addition;
        if (addition.add(-4, 3) != -1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZeros() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }


    void testLargePositiveIntegers() {
        Addition addition;
        if (addition.add(100000, 50000) != 150000) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }


    void testLargeNegativeIntegers() {
        Addition addition;
        if (addition.add(-20000, -100000) != -120000) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(-1, 1) != -0) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }



    // Add other test functions here
};
#endif