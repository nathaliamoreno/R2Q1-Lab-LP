#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido p, int m); //nqt = nova quantidade
        double calculaTotalRestaurante();
        double calculaTotalMesa(int m);
        void zeraPedidosMesa(int m);

    private:
        MesaDeRestaurante mesa[10];

};

#endif // RESTAURANTECASEIRO_H
