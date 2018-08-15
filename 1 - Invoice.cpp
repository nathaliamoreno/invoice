#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

Invoice::Invoice(int numero, int quantidade, string descricao, double preco){

     this->numero = numero;
     this->quantidade = quantidade;
     this->descricao = descricao;
     this->preco = preco;

}
double Invoice::getInvoiceAmount(){

     double valorT;

	 if(quantidade < 0){
  	   quantidade = 0;
	 }
	 if (preco < 0){
  	   preco = 0.0;
     }
	 valorT = quantidade*preco;

	return valorT;
}

void Invoice::setNumero(int numero){
	 this->numero=numero;
}
void Invoice::setQuantidade(int quantidade){
     this->quantidade=quantidade;
}
void Invoice::setDescricao(string descricao){
     this->descricao=descricao;
}
void Invoice::setPreco(double preco){
     this->preco=preco;
}
int Invoice::getNumero(){
     return numero;
}
int Invoice::getQuantidade(){
     return quantidade;
}
string Invoice::getDescricao(){
     return descricao;
}
double Invoice::getPreco(){
     return preco;
}
