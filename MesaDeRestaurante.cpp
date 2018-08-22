#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    iAtual = 0;
}
void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    int i,q;
    for(i = 0; i < 10; i++){
        if(pedido[i].getDescricao() == p.getDescricao()){
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

