#ifndef TAREA_HUESPEDES_T_BOY_PROPIETARIO_H
#define TAREA_HUESPEDES_T_BOY_PROPIETARIO_H

#include <iostream>
#include "Persona.h"
#include "Hogar.h"

using std::cin;
using std::cout;
using std::string;

class Propietario : public Persona{
private:
    Hogar * hogar;
    bool disponiblidad;

public:

    //Gets de la clase Propietario
    bool getPropietario();
    Hogar *getHogar() const;

    //Sets de la clase Propietario
    bool setPropietario();
    void setPropietario();
    void mostrarPropietario();





};


#endif //TAREA_HUESPEDES_T_BOY_PROPIETARIO_H
