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

void Hogar::setDireccion(string direccion1) {
    Hogar::direccion = direccion1;
}

void Hogar::setNumeroDeCamasDisponibles(int disponibles) {
    Hogar::numeroDeCamasDisponibles = disponibles;
}

void Hogar::setPuedeTenerBebes(bool bol) {
    Hogar::puedeTenerBebes = bol;
}

void Hogar::setDescripcion(string descripcion1) {
    Hogar::descripcion = descripcion1;
}