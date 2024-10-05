#include <iostream>
#include "BrazoRobotico.h"

int main() {
    BrazoRobotico brazo(1.0, 2.0, 3.0);
    
    std::cout << "Posición inicial: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";
    
    brazo.coger();
    std::cout << "¿Sujeta objeto?: " << (brazo.isSujetando() ? "Sí" : "No") << "\n";
    
    brazo.mover(4.0, 5.0, 6.0);
    std::cout << "Nueva posición: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";

    brazo.soltar();
    std::cout << "¿Sujeta objeto?: " << (brazo.isSujetando() ? "Sí" : "No") << "\n";

    return 0;
}

