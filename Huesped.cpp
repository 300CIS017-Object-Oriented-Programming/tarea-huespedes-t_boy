#include "Huesped.h"

/*
Huesped :: Huesped {
    informacionFamiliarClinica = " ";
    strind ciudadFamiliar="";
};
 */

Huesped :: Huesped(string informacionFamiliarClinica, string ciudadFamiliar): informacionFamiliarClinica(informacionFamiliarClinica), ciudadFamiliar(ciudadFamiliar){}

void Huesped :: mostrarHuesped(){
    cout << "El familiar esta en la clinica" << informacionFamiliarClinica << "\n";
    cout << "El familiar es de laciudad de " << ciudadFamiliar << "\n";
};

//Gets de clase Huesped

string Huesped::getInformacionFamiliarCliniCa(){
    return informacionFamiliarClinica;
}

string Huesped::getCiudadFamiliar(){
    return ciudadFamiliar;
}

//Sets de la clase Huesped

void Huesped::setInformacionFamiliarCliniCa(string clinica1){
    Huesped::informacionFamiliarClinica = clinica1;
}

void Huesped::getCiudadFamiliar(string ciudad1){
    Huesped::ciudadFamiliar = ciudad1;
}
