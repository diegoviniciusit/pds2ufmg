#ifndef VENDEDOR_H
#define VENDEDOR_H
#define MESES_ANO 12

#include "Empregado.hpp"

class Vendedor : public Empregado {
    
    private:
        double quotaMensalVendas;
    
    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora), quotaMensalVendas(quotaMensalVendas) {};
        double quotaTotalAnual();
};

#endif
