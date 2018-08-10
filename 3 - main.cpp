#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
 	    Invoice fatura = Invoice(1, 2, "brinquedo", 20.50);

        cout << fatura.getInvoiceAmount() <<endl;


    return 0;
}
