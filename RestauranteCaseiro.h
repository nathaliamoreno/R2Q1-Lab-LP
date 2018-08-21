#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        int adicionaAoPedido(Pedido p, int nqt); //nqt = nova quantidade
        double calculaTotalRestaurante(double v);

    private:
        Pedido pedido;

};

#endif // RESTAURANTECASEIRO_H
