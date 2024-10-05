#include "BrazoRobotico.h"

// Constructor
BrazoRobotico::BrazoRobotico(double x_init, double y_init, double z_init)
    : x(x_init), y(y_init), z(z_init), sujetando(false) {}

// Métodos consultores
double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::isSujetando() const {
    return sujetando;
}

// Métodos de acción
void BrazoRobotico::coger() {
    if (!sujetando) {
        sujetando = true;
    }
}

void BrazoRobotico::soltar() {
    if (sujetando) {
        sujetando = false;
    }
}

void BrazoRobotico::mover(double new_x, double new_y, double new_z) {
    x = new_x;
    y = new_y;
    z = new_z;
}

