#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();

    private:
        Pedido pedido[10];
        int iAtual;
};

#endif // MESADERESTAURANTE_H
