#include <iostream>
#include "Reserva.h"

void Reserva::mostrarReserva()
{ // Para mostrar los datos de la persona
    cout << "**********************";
    cout << "La fecha de inicio de la reserva es: " << fechaDeInicio << "\n";
    cout << "La fecha de fin de la reserva es  " << fechaDeFin << "\n";
    cout << "El id de la reserva es  " << id << "\n";
    if(getpropietario()!=NULL){
        cout<<"Detalles del Propietario"<<endl;
        Propietario->mostrarPropietario();
        cout<<"Detalles del Huesped"<<endl;
        Huesped->mostrarHuesped();
    }
}

//Gets de clase Reserva

string Reserva::getFechaDeInicio() {
    return fechaDeInicio;
}

string Reserva::getFechaDeFin() {
    return fechaDeFin;
}

Propietario *Reserva::getPropietario() const {
    return propietario;
}

Huesped *Reserva::getHuesped() const {
    return huesped;
}

int  Reserva::getId() {
    return id;
}

//Sets de clase Reserva

void Reserva::setFechaDeInicio(string inicio) {
    Reserva::fechaDeInicio = inicio;
}

void Reserva::setFechaDeFin(string fin) {
    Reserva::fechaDeFin = fin;
}

void Reserva::setPropietario(Propietario *propietario1){
    Reserva::propietario = propietario1;
}

void Reserva::setHuesped(Huesped *huesped1){
    Reserva::huesped = huesped1;
}

void Reserva::setId(int id) {
    Reserva::id = id;
}



