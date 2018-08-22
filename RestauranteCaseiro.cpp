#include "RestauranteCaseiro.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"

RestauranteCaseiro::RestauranteCaseiro(){

}
void RestauranteCaseiro::adicionaAoPedido(Pedido p, int m){
    mesa[m].adicionaAoPedido(p);
}
double RestauranteCaseiro::calculaTotalRestaurante(){ // valor do parametro com valor = ao MesaDeRestaurante
    double totalRest =0; //total restaurante

    totalRest += valor; //pega o valor da classe MesaDeRestaurante e soma ao total.

    return totalRest;
}
