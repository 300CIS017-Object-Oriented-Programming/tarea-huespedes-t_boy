//
// Created by LENOVO I7 on 15/9/2022.
//

#ifndef TAREA_HUESPEDES_T_BOY_HUESPED_H
#define TAREA_HUESPEDES_T_BOY_HUESPED_H

#include <iostream>

using std::cin;
using std::cout;
using std::string;


class Huesped {
private:
    string informacionFamiliarClinica;
    strind ciudadFamiliar;

public:
    Huesped();
    Huesped(string informacionFamilairClinica, string ciudadFamiliar);

    void mostrarHuesped();

    const string &getInformacionFamiliarClinica() const;
    void setInformacionFamilarClinica(const string &informacionFamilairClinica);
};
#endif //TAREA_HUESPEDES_T_BOY_HUESPED_H