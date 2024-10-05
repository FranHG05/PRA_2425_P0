#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x; // Coordenada x
    double y; // Coordenada y
    double z; // Coordenada z
    bool sujetando; // Indica si está sujetando un objeto

public:
    // Constructor
    BrazoRobotico(double x_init = 0.0, double y_init = 0.0, double z_init = 0.0);

    // Métodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool isSujetando() const;

    // Métodos de acción
    void coger();
    void soltar();
    void mover(double new_x, double new_y, double new_z);
};

#endif // BRAZOROBOTICO_H

