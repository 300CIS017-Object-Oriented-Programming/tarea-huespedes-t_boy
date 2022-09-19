#ifndef TAREA_HUESPEDES_T_BOY_SISTEMA_H
#define TAREA_HUESPEDES_T_BOY_SISTEMA_H

#include <iostream>

using std::string;
using std::endl;

class Sistema{
private:
    unordermap<int, Propietario*>;
    unordermap<int, Reserva*>;
    unordermap<int, Huesped*>;
    vector<Hogar*>;
    vector<Evaluacion*>;

public:

};


#endif //TAREA_HUESPEDES_T_BOY_SISTEMA_H
