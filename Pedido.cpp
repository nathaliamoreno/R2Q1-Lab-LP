#include "Pedido.h"

Pedido::Pedido(){

}
Pedido::Pedido(int n, std::string d, int q, double p){
    numero = n;
    descricao = d;
    quantidade = q;
    preco = p;
}
void Pedido::setNumero(int n){
    numero = n;
}
void Pedido::setDescricao(std::string d){
    descricao = d;
}
void Pedido::setQuantidade(int q){
    quantidade = q;
}
void Pedido::setPreco(double p){
    preco = p;
}
int Pedido::getNumero(){
    return numero;
}
std::string Pedido::getDescricao(){
    return descricao;
}
int Pedido::getQuantidade(){
    return quantidade;
}
double Pedido::getPreco(){
    return preco;
}
 
