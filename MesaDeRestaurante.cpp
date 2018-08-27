#include "MesaDeRestaurante.h"

using namespace std;
MesaDeRestaurante::MesaDeRestaurante(){
    iAtual = 0;
}
void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    int i,q;
    std::string str1, str2;
    for(i = 0; i < 10; i++){
            str1 = pedido[i].getDescricao();
            str2 = p.getDescricao();
        if(str1 == str2){
            q = pedido[i].getQuantidade();
            q++;
            pedido[i].setQuantidade(q);
        }else{
            pedido[iAtual] = p;

        }
    }
    iAtual++;
}
void MesaDeRestaurante::zeraPedidos(){
    iAtual = 0;
}
double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for(int i = 0; i < iAtual; i++){
        total += (pedido[i].getQuantidade()*pedido[i].getPreco());
    }
    return total;
}
