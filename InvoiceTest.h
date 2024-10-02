
#ifndef INVOICETEST_H
#define INVOICETEST_H


#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testConstructor();
        testInvoiceId();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }


        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-2);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-2);
            invoice.addServiceCost(5);
            invoice.addServiceCost(6);
            if (invoice.getDollarsOwed() != 11) {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }


        // Add more test cases here
    }

    void testConstructor() {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceId() != "ABCD" && invoice.getDollarsOwed() != 0) {
                std::cout << "Test 5 failed!" << std::endl;
            }
        }
    }

    void testInvoiceId() {
        {
            Invoice invoice("Test");
            if (invoice.getInvoiceId() != "Test") {
                std::cout << "Test 6 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("aSdFgHjKl");
            if (invoice.getInvoiceId() != "aSdFgHjKl") {
                std::cout << "Test 7 failed!" << std::endl;
            }
        }


        {
            Invoice invoice("");
            if (invoice.getInvoiceId() != "") {
                std::cout << "Test 8 failed!" << std::endl;
            }
        }
    }

    // Add other test functions here
};

#endif

