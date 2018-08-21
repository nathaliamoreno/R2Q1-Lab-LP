#include "RestauranteCaseiro.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"


RestauranteCaseiro::RestauranteCaseiro(){

}
int RestauranteCaseiro::adicionaAoPedido(Pedido p, int NovaQt){
    this->pedido = p; //recebendo as informacoes do pedido da main que quer modificar
    pedido.setQuantidade(NovaQt);
    return pedido.getQuantidade(); //retornando o novo valor
}
double RestauranteCaseiro::calculaTotalRestaurante(double valor){ // valor do parametro com valor = ao MesaDeRestaurante
    double totalRest =0; //total restaurante

    totalRest += valor; //pega o valor da classe MesaDeRestaurante e soma ao total.

    return totalRest;
}
