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

string Huesped::setInformacionFamiliarCliniCa(){
    cout<<"Por favor ingresa informacion sobre la clinica en la que esta tu familiar: "<<endl;
    cin>>clinica;
    Huesped::informacionFamiliarClinica = clinica;
}

string Huesped::getCiudadFamiliar(){
    cout<<"Por favor ingresa informacion sobre la ciudad de origen del familiar: "<<endl;
    cin>>ciudad;
    Huesped::ciudadFamiliar = ciudad;
}
