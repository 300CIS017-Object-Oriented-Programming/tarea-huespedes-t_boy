#include "Propietario.h"

void Propietario::mostrarPropietario()
{ // Para mostrar los datos de la persona
    cout << "**********************";
    cout << "¿Tiene disponibilidad para la casa?: " << disponiblidad << "\n";
    if(getHogar()!=NULL){
        Hogar->mostrarHogar();
    }
}

//Gets de la clase Propietario

bool Propietario::getDisponibilidad() {
    return disponiblidad;
}

Hogar *Propietario::getHogar() const {
    return hogar;
}

//Sets de la clase Propietario

bool Propietario::setDisponibilidad(bool disponibilidad) {
    Propietario::disponiblidad = disponibilidad;
}

void Propietario::setDisponibilidad(Hogar *hogar) {
    Propietario::hogar = hogar;
}