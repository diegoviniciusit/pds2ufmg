#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {
    
    private:
        int projetos;
    
    public:
        Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome, salarioHora), projetos(projetos) {};
        int getProjetos();
};

#endif
