#ifndef TAREA_HUESPEDES_T_BOY_SISTEMA_H
#define TAREA_HUESPEDES_T_BOY_SISTEMA_H

#include <iostream>
#include <Propietario.h>
#include <Reserva.h>
#include <Huesped.h>
#include <Hogar.h>
#include <Evaluacion.h>
#include <vector>
#include <stdlib.h>


using std::string;
using std::endl;
using std::cin;
using std::vector;

class Sistema{
private:
    unordermap<int, Propietario*>;
    unordermap<int, Reserva*>;
    unordermap<int, Huesped*>;
    vector<Hogar*>;
    vector<Evaluacion*>;
    void inicializarDatos();

public:
    Sistema();
    void agregarInformacionPropietario();
    void crearReservas();
    void liberarReservas();
    void agregarEvaluaciones();
    void calcularPuntaje();
};


#endif //TAREA_HUESPEDES_T_BOY_SISTEMA_H
