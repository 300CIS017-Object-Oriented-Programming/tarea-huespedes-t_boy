#ifndef TAREA_HUESPEDES_T_BOY_HUESPED_H
#define TAREA_HUESPEDES_T_BOY_HUESPED_H

#include <iostream>
#include "Persona.h"

using std::cin;
using std::cout;
using std::string;


class Huesped : public Persona {
private:
    string informacionFamiliarClinica;
    strind ciudadFamiliar;

public:

    //Constructores de la clase Huesped
    Huesped();
    Huesped(string informacionFamilairClinica, string ciudadFamiliar);

    //Gets de la clase Huesped
    string getInformacionFamiliarClinica();
    string getCiudadFamiliar();

    //Sets de la clase Huesped
    void setInformacionFamiliarClinica(string clinica1);
    void setCiudadFamiliar(string ciudad1);
    void mostrarHuesped();

};
#endif //TAREA_HUESPEDES_T_BOY_HUESPED_H