#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
 	    Invoice fatura1 = Invoice(1, 2, "brinquedo", 20.50);
 	    Invoice fatura2 = Invoice (1, 2, "brinquedo", -5.0);
 	    Invoice fatura3 = Invoice(1, -2, "brinquedo", 20.50);

        cout << "Total da fatura com valores MAIORES que zero: R$ " << fatura1.getInvoiceAmount() <<endl;
        cout << "Total da fatura com PRECO MENOR que zero: R$ " << fatura2.getInvoiceAmount() <<endl;
        cout << "Total da fatura com QUANTIDADE MENOR que zero: R$ " << fatura3.getInvoiceAmount() <<endl;


    return 0;
}
