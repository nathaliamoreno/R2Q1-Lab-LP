#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido{
    public:
        Pedido();
        Pedido(int n, std::string d, int q, double p);
        void setNumero(int n);
        void setDescricao(std::string d);
        void setQuantidade(int q);
        void setPreco(double p);
        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();
    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
 
