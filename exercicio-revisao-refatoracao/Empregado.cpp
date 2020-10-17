#include "Empregado.hpp"

std::string Empregado::getNome() {
    return this->nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double horasCalculo = horasTrabalhadas;
    if (horasTrabalhadas > LIMITE_HORAS) {
        double horasAposLimite = horasTrabalhadas - LIMITE_HORAS;
        horasCalculo += horasAposLimite / RELACAO_AUMENTO;
    }
    return horasCalculo * salarioHora;
}
