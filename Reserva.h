#ifndef TAREA_HUESPEDES_T_BOY_RESERVA_H
#define TAREA_HUESPEDES_T_BOY_RESERVA_H

#include <iostream>

using std::string;
using std::endl;


class Reserva{

private:
    string fechaDeInicio;
    string fechaDeFin;
    //Propietario * propietario;
    //Huesped * huesped;
    int id;

public:

    //Gets de los atributos de la clase reserva
    string getFechaDeInicio();
    string getFechaDeFin();
    //Propietario * getpropietario() const;
    //Huesped * gethuesped() const;
    int getId();

    //Sets de los atributos de la clase reserva
    string setFechaDeInicio();
    string setFechaDeFin();
    //void setPropietario() const;
    //void setHuesped() const;
    int setId();
    void mostrarReserva();
};

#endif //TAREA_HUESPEDES_T_BOY_RESERVA_H
