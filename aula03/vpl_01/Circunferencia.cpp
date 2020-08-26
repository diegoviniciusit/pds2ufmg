#include <cmath>
#include "Circunferencia.hpp"

Circunferencia::Circunferencia(int x, int y, int r) {
    xc = x;
    yc = y;
    raio = r;
}

double Circunferencia::calcularArea() {
    return 3.14 * raio * raio;
}

bool Circunferencia::possuiIntersecao(Circunferencia* c) {
    double distance = ((xc - c->xc) * (xc - c->xc)) + ((yc - c->yc) * (yc - c->yc));
    if (distance < 0) {
        distance = distance * -1;
    }
    distance = sqrt(distance);
    if (distance <= raio + c->raio) return true;
    return false;
}
