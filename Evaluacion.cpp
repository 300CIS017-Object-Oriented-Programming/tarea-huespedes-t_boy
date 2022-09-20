#include <iostream>
#include "Evaluacion.h"

void Evaluacion::mostrarEvaluacion() {
    //Para mostrar la evaluacion
    cout << "**********************";
    cout << "Su calificacion es: " << calificacion << "\n";
    cout << "Sus respectivos comentarios son: " << comentarios << "\n";
    if(getEmisor()!=NULL){
        cout<<"Detalles del Emisor"<<endl;
        propietario->mostrarPropietario();
        cout<<"Detalles del Receptor"<<endl;
        huesped->mostrarHuesped();
    }
}

//Gets de la clase Evaluacion

int Evaluacion::getCalificacion() {
    return calificacion;
}

string Evaluacion::getComentarios() {
    return comentarios;
}

Propietario *Evaluacion::getEmisor() const {
    return emisor;
}

Huesped *Evaluacion::getReceptor() const {
    return receptor;
}

//Sets de la clase Evaluacion

void Evaluacion::setCalificacion(int calificacion1) {
    Evaluacion:: calificacion = calificacion1;
}

void Evaluacion::setComentarios(string comentarios1) {
    Evaluacion::comentarios = comentarios1;
}

void Evaluacion::setEmisor(Huesped *emisor1){
    Evaluacion::emisor = emisor1;
}

void Evaluacion::setReceptor(Propietario *receptor1){
    Evaluacion::receptor = receptor1;
}


