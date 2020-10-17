#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <vector>

void exibirDadosBasicos(Empregado empregado, double horasTrabalhadas) {
    std::cout << "Nome: " << empregado.getNome() << std::endl;
    std::cout << "Salario Mes: " << empregado.pagamentoMes(horasTrabalhadas) << std::endl;
}

std::vector<Engenheiro> criarEngenheiros() {
    std::vector<Engenheiro> engenheiros;
    engenheiros.push_back(Engenheiro("Joao Snow", 35, 3));
    engenheiros.push_back(Engenheiro("Daniela Targaryen", 30, 1));
    engenheiros.push_back(Engenheiro("Bruno Stark", 30, 2));
    return engenheiros;
}

void exibirEngenheiros(std::vector<Engenheiro> engenheiros, double* horasTrabalhadas) {
    for (int i = 0; i < engenheiros.size(); i++) {
        exibirDadosBasicos(engenheiros[i], horasTrabalhadas[i]);
        std::cout << "Projetos: " << engenheiros[i].getProjetos() << std::endl;
        std::cout << std::endl;
    }
}

std::vector<Vendedor> criarVendedores() {
    std::vector<Vendedor> vendedores;
    vendedores.push_back(Vendedor("Tonho Lannister", 20, 5000));
    vendedores.push_back(Vendedor("Jose Mormont", 25, 3000));
    vendedores.push_back(Vendedor("Sonia Stark", 30, 4000));
    return vendedores;
}

void exibirVendedores(std::vector<Vendedor> vendedores, double* horasTrabalhadas) {
    for (int i = 0; i < vendedores.size(); i++) {
        exibirDadosBasicos(vendedores[i], horasTrabalhadas[i]);
        std::cout << "Quota vendas: " << vendedores[i].quotaTotalAnual() << std::endl;
        if (i != (vendedores.size() - 1)) {
            std::cout << std::endl;
        }
    }
}

int main() {
    std::vector<Engenheiro> engenheiros;
    engenheiros = criarEngenheiros();
    double horasEngenheiros[engenheiros.size()] = {9.5, 8, 8};
    exibirEngenheiros(engenheiros, horasEngenheiros);

    std::vector<Vendedor> vendedores;
    vendedores = criarVendedores();
    double horasVendedores[vendedores.size()] = {6, 8, 8};
    exibirVendedores(vendedores, horasVendedores);

    return 0;
}
