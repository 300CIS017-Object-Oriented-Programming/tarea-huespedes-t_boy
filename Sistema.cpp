#include <iostream>
#include "Sistema.h"
#include "Reserva.h"

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
    contReservas = 0
    double identificacion;
    cout << "Escribe la Identificacion del propietario: ";
    cin >> idProp;
    if (!Propietario(identificacion)){
        cout << "No hay informacion del propietario.\n" << endl;
        return;
    }
    if (!Propietario(identificacion).setDisponibilidad(false)){
        cout << "No puede recibir huespedes" << endl;
    }
    Propietario.(identificacion)->setDisponibilidad(true);

    string fechaDeInicio, fechaDeFin;
    cout << "Ingrese la fecha de incio de su hospedaje: ";
    cin >> fechaDeInicio;
    cout << "Ingrese la fecha de salida de su hospedaje: ";
    cin >> fechaDeFin;
    *new Reserva = new Reserva();
    *new Reserva->getFechaDeInicio(fechaDeInicio);
    *new Reserva->getFechaDeFin(fechaDeFin);
    *new Reserva->setPropietario(Propietario(identificacion));
    *new Reserva->setHuesped(Huesped(identificacion));

    Reserva[contReservas] = new Reserva;
    contReservas += 1;

    cout << "Su reserva ha sido creada" << endl;

}
void Sistema::liberarReservas() {
    int id;
    cout << "Digite id de reserva: ";
    cin >> id;

    if (!Reserva(id)){
        cout << "No existe reserva con ese numero" << endl;
        return;
    }
    Reserva(id).getpropietario()->setDisponibilidad(true);
}

void Sistema::agregarEvaluaciones() {
    double *emisor, *receptor;
    contEval = 0
    cout << "Ingrese su ID: ";
    cin >> *emisor;
    if (!Huesped(*emisor)){
        cout << "No se encontro el usuario" << endl;
        return;
    }
    cout << "Digite el ID de la persona a evaluar";
    cin >> *receptor;
    if (!Propietario(*receptor)){
        cout << "No se encontro el usuario" << endl;
        return;
    }
    string fechaEval, comentarios;
    int calificacion;
    cout << "Digite la Fecha en que realizo la calificacion: ";
    cin >> fechaEval;
    cout << "Digite la nota correspondiente: ";
    cin >> calificacion;
    cout << "Por favor deje un comentario: ";
    cin >> comentarios;

    *new Evaluacion = new Evaluacion();

    *new Evaluacion->getCalificacion(calificacion);
    *new Evaluacion->getComentarios(comentarios);
    *new Evaluacion->getEmisor(*emisor);
    *new Evaluacion->getReceptor(*receptor);

    Evaluacion[contEval] = new Evaluacion;
    contEval += 1;
}
void Sistema::calcularPuntaje() {
    int puntaje;
}

void Sistema::agregarInformacionPropietario() {
    int identificacion;
    string nombre;
    string sexo;
    string fechaDeNacimiento;

    cout << "Ingrese su Id: ";
    cin >> identificacion;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su sexo Masculino o Femenino: ";
    cin >> sexo;
    cout << "Ingrese su fecha de Nacimiento: ";
    cin >> fechaDeNacimiento;

    *new Propietario = new Propietario();
    *new Propietario->getIdentificacion(identificacion);
    *new Propietario->getNombre(nombre);
    *new Propietario->getSexo(sexo);
    *new Propietario->getFechaDeNacimiento(fechaDeNacimiento);

    Propietario[identificacion] = new Propietario;
}

