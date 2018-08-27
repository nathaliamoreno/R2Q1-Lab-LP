#include "RestauranteCaseiro.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"

RestauranteCaseiro::RestauranteCaseiro(){

}
void RestauranteCaseiro::adicionaAoPedido(Pedido p, int m){
    mesa[m].adicionaAoPedido(p);
}
double RestauranteCaseiro::calculaTotalMesa(int m){
    return mesa[m].calculaTotal();

}
double RestauranteCaseiro::calculaTotalRestaurante(){
   double totalRest = 0; //total restaurante

     for(int i = 0; i < 10; i++){
        totalRest += mesa[i].calculaTotal() ; //pega o valor da classe MesaDeRestaurante e soma ao total.
     }

    return totalRest;
}
void RestauranteCaseiro::zeraPedidosMesa(int m){
    mesa[m].zeraPedidos();
}
