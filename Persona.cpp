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


//Gets de clase Persona

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

void Persona::setIdentificacion(int identificacion)
{
    Persona::identificacion =identificacion;
}

void Persona::setNombre( string nombre1)
{
    Persona::nombre = nombre1;
}

void Persona::setSexo( string genero)
{
    Persona::sexo =genero;
}

void Persona::setFechaDeNacimiento(string fechaDeNacimiento1)
{
    Persona::fechaDeNacimiento =fechaDeNacimiento1;
}

void Persona::setPuntaje(int puntaje)
{
    Persona::puntaje =puntaje;
}