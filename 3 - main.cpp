#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
 	    Invoice fatura1 = Invoice(1, 2, "brinquedo", 20.50); //VALORES POSITIVOS
 	    Invoice fatura2 = Invoice (1, 2, "brinquedo", -5.0); //PREÇO NEGATIVO
 	    Invoice fatura3 = Invoice(1, -2, "brinquedo", 20.50); //QUANTIDADE NEGATIVA

 	    cout << "---------------------------" <<endl;
        cout << "Total da fatura:\n R$ " << fatura1.getInvoiceAmount() <<endl;
        cout << "---------------------------" <<endl;
        cout << "Total da fatura com PRECO < 0:\n R$ " << fatura2.getInvoiceAmount() <<endl;
        cout << "(preco negativo configurado como zero)" <<endl;
        cout << "---------------------------" <<endl;
        cout << "Total da fatura com QUANTIDADE < 0:\n R$ " << fatura3.getInvoiceAmount() <<endl;
        cout << "(quantidade negativa configurada como zero)" <<endl;
        cout << "---------------------------" <<endl;

    return 0;
}
