
#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {

private:
    std::string invoiceId;
    int dollarsOwed;

public:
    Invoice(std::string invoiceId) : invoiceId(invoiceId), dollarsOwed(0) {};
    void addServiceCost(int costDollars) {
        if(costDollars >= 0) {
            dollarsOwed += costDollars;
        }
    };
    int getDollarsOwed() {return dollarsOwed;};
    std::string getInvoiceId() {return invoiceId;};
};

#endif