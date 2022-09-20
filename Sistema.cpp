#include <iostream>
#include "Sistema.h"

Sistema::Sistema(){
    cout << "Inicializa datos aqui\n";
    inicializarDatos();
};
void Sistema::agregarInformacionPropietario() {
    if (propietarios.find() == propietarios.end()){
        return false;
    }
    return true;
}
void Sistema::crearReservas() {
    double idProp;
    cout << "Escribe la Identificacion del propietario: ";
    cin >> idProp;
    if (!Propietario(idProp)){
        cout << "No hay informacion del propietario.\n" << endl;
        return;
    }
    if (!Propietario(idProp).setDisponibilidad(false)){
        cout << "No puede recibir huespedes"
    }
}
void Sistema::liberarReservas() {

}

