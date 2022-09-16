//
// Created by LENOVO I7 on 15/9/2022.
//
#include "Huesped.h"

Huesped :: Huesped {
    informacionFamiliarClinica = " ";
    strind ciudadFamiliar="";
};

Huesped :: Huesped(string informacionFamiliarClinica, string ciudadFamiliar): informacionFamiliarClinica(informacionFamiliarClinica), ciudadFamiliar(ciudadFamiliar){}

void Huesped :: mostrarHuesped(){
    cout << "El familiar esta en la clinica" << informacionFamiliarClinica << "\n";
    cout << "El familiar es de laciudad de " << ciudadFamiliar << "\n";
};

const string &Huesped::getInformacionFamiliarCliniCa() const {
    return informacionFamiliarClinica;
}

void CuartoUtil::setInformacionFamiliarClinica(const string &informacionFamiliarClinic) {
    Huesped::informacionFamiliarClinic = informacionFamiliarClinic;
}