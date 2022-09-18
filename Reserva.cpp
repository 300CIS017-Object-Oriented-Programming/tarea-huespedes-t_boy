#include <iostream>
#include "Reserva.h"

void Reserva::mostrarReserva()
{ // Para mostrar los datos de la persona
    cout << "**********************";
    cout << "La fecha de inicio de la reserva es: " << fechaDeInicio << "\n";
    cout << "La fecha de fin de la reserva es  " << fechaDeFin << "\n";
    cout << "El sexo de la Persona es:  " << sexo << "\n";
    cout << "La fecha de nacimiento de la persona es:  " << fechaDeNacimiento << "\n";
    cout << "El id de la reserva es  " << id << "\n";
}

//Gets de clase Reserva

string Reserva::getFechaDeInicio() {
    return fechaDeInicio;
}

string Reserva::getFechaDeFin() {
    return fechaDeFin;
}

Propietario *Propietario::getPropietario() const {
    return propietario;
}

Huesped * huesped::getHuesped() const {
    return huesped;
}

Huesped *huesped::getPropiedad() const {
    return huesped;
}

int  Reserva::getId() {
    return id;
}

//Sets de clase Reserva

string Reserva::setFechaDeInicio() {
    cout<<"Por favor ingresa la fecha de inicio de tu reserva"<<endl;
    cin>>fechaDeInicio;
    Reserva::fechaDeInicio = fechaDeInicio;
}

string Reserva::setFechaDeFin() {
    cout<<"Por favor ingresa la fecha de fin de tu reserva"<<endl;
    cin>>fechaDeFin;
    Reserva::fechaDeFin = fechaDeFin;
}

/*
void Propietario::setPropietario() const {
    return propietario;
}

Huesped *huesped::setPropiedad() const {
    return huesped;
}
*/

int  Reserva::setId() {
    cout<<"Por favor ingresa el id de la reserva: "<<endl;
    cin>>id;
    Reserva::id == id;
}



