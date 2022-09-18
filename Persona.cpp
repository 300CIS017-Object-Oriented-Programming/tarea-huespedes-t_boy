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

int Persona::setIdentificacion()
{
    cout<<"Por favor ingresa tu número de Identificación"<<endl;
    cin>>identificacion;
    Persona::identificacion =id;
}

string Persona::setNombre( string nombre)
{
    cout<<"Por favor ingresa tu nombre"<<endl;
    cin>>nombre;
    Persona::nombre = nombre;
}

string Persona::setSexo( string sexo)
{
    cout<<"Por favor ingresa tu sexo(género)"<<endl;
    cin>>sexo;
    Persona::sexo =sexo;
}

string Persona::setFechaDeNacimiento(string fechaDeNacimiento)
{
    cout<<"Por favor ingresa tu fecha de nacimiento"<<endl;
    cin>>fechaDeNacimiento;
    Persona::fechaDeNacimiento =fechaDeNacimiento;
}

int Persona::setPuntaje(int puntaje)
{
    Persona::puntaje =puntaje;
}