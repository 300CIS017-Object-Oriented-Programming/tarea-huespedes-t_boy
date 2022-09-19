#ifndef TAREA_HUESPEDES_T_BOY_RESERVA_H
#define TAREA_HUESPEDES_T_BOY_RESERVA_H

#include <iostream>

using std::string;
using std::endl;


class Reserva{

private:
    string fechaDeInicio;
    string fechaDeFin;
    Propietario * propietario;
    Huesped * huesped;
    int id;

public:

    //Gets de los atributos de la clase reserva
    string getFechaDeInicio();
    string getFechaDeFin();
    Propietario * getpropietario() const;
    Huesped * gethuesped() const;
    int getId();

    //Sets de los atributos de la clase reserva
    void setFechaDeInicio(string inicio);
    void setFechaDeFin(string fin);
    void setPropietario(Propietario *propietario1);
    void setHuesped(Huesped *huesped1);
    void setId(int id);
    void mostrarReserva();
};

#endif //TAREA_HUESPEDES_T_BOY_RESERVA_H
