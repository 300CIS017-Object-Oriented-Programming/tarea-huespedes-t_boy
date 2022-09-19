#include <iostream>
#include "Hogar.h"

void Hogar::mostrarHogar() {
    // Para mostrar los datos del Hogar
    cout << "**********************";
    cout << "La direccion del hogar es: " << direccion << "\n";
    cout << "El numero de camas disponibles es: " << numeroDeCamasDisponibles << "\n";
    cout << "¿Puede tener bebes: " << puedeTenerBebes << "\n";
    cout << "La descripcion del hogar es: " << descripcion << "\n";
}


//Gets de la clase Hogar

string Hogar::getDireccion() {
    return direccion;
}

int Hogar::getNumeroDeCamasDisponibles() {
    return numeroDeCamasDisponibles;
}

bool Hogar::getPuedeTenerBebes() {
    return puedeTenerBebes;
}

string Hogar::getDescripcion() {
    return descripcion;
}


//Sets de la clase Hogar

string Hogar::setDireccion() {
    cout<<"Por favor ingresa la direccion del hogar: "
    cin>>direccion;
    Hogar::direccion = direccion;
}

int Hogar::setNumeroDeCamasDisponibles() {
    cout<<"Por favor ingresa el numero de camas disponibles: "
    cin>>camasDisponibles;
    Hogar::numeroDeCamasDisponibles = camasDisponibles;
}

bool Hogar::setPuedeTenerBebes(bool bol) {
    Hogar::puedeTenerBebes = bol;
}

string Hogar::setDescripcion() {
    cout<<"Por favor ingresa la descripcion del hogar: "
    cin>>descripcion1;
    Hogar::descripcion = descripcion1;
}