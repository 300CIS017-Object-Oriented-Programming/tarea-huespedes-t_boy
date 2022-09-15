#include <iostream>
#include "Persona.h"

void Persona::mostrarPersona()
{ // Para mostrar los datos de la persona
    cout << "**********************";
    cout << "El número de identificación es: " << identificacion << "\n";
    cout << "El nombre de la Persona es:  " << nombre << "\n";
    cout << "El sexo de la Persona es:  " << sexo << "\n";
    cout << "La fecha de nacimiento de la persona es:  " << fechaDeNacimiento << "\n";
    cout << "El puntaje de la persona es:  " << puntaje << "\n";
}

int Persona::getIdentificacion()
{
    return identificacion;
}

string Persona::getNombre()
{
    return nombre;
}

string Persona::getSexo()
{
    return sexo;
}

string Persona::getFechaDeNacimiento()
{
    return fechaDeNacimiento;
}

int Persona::getPuntaje()
{
    return puntaje;
}


//Sets de clase Persona

int Persona::setIdentificacion( int id)
{
    Persona::identificacion =id;
}

string Persona::setNombre( string nombre)
{
    Persona::nombre =nombre;
}

string Persona::setSexo( string sexo)
{
    Persona::sexo =sexo;
}

string Persona::setFechaDeNacimiento(string fechaDeNacimiento)
{
    Persona::fechaDeNacimiento =fechaDeNacimiento;
}

int Persona::setPuntaje(int puntaje)
{
    Persona::puntaje =puntaje;
}