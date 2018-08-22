#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido p, int nqt); //nqt = nova quantidade
        double calculaTotalRestaurante();

    private:
        MesaDeRestaurante mesa[10];

};

#endif // RESTAURANTECASEIRO_H
