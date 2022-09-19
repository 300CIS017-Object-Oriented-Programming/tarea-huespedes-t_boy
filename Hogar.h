#ifndef TAREA_HUESPEDES_T_BOY_HOGAR_H
#define TAREA_HUESPEDES_T_BOY_HOGAR_H

#include <iostream>

using std::string;
using std::endl;

class Hogar{
private:
    string direccion;
    int numeroDeCamasDisponibles;
    bool puedeTenerBebes;
    string descripcion;

public:

    //Gets de la clase Hogar
    string getDireccion();
    int getNumeroDeCamasDisponibles();
    bool getPuedeTenerBebes();
    string getDescripcion();

    //Sets de la clase Hogar
    string setDireccion();
    int setNumeroDeCamasDisponibles();
    bool setPuedeTenerBebes(bool bol);
    string setDescripcion();
    void mostrarHogar();

};




#endif //TAREA_HUESPEDES_T_BOY_HOGAR_H
