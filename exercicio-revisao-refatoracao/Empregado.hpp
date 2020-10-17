#ifndef EMPREGADO_H
#define EMPREGADO_H
#define LIMITE_HORAS 8
#define RELACAO_AUMENTO 2

#include <iostream>
#include <string>

class Empregado {

    private:
        std::string nome;
        double salarioHora;
    
    public:
        Empregado (std::string nome, double salarioHora) : nome(nome), salarioHora(salarioHora) {};
        std::string getNome();
        double pagamentoMes(double horasTrabalhadas);
};

#endif
