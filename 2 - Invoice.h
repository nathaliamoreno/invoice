#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <string>

class Invoice{

public:
    int numero, quantidade;
    std::string descricao;
    double preco;

    Invoice (int numero, int quantidade, std::string descricao, double preco);

    double getInvoiceAmount();

	void setNumero(int numero);
	void setQuantidade(int quantidade);
	void setDescricao(std::string descricao);
	void setPreco(double preco);

	int getNumero();
	int getQuantidade();
	std::string getDescricao();
	double getPreco();
};

#endif // INVOICE_H_INCLUDED
