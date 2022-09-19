#ifndef TAREA_HUESPEDES_T_BOY_PERSONA_H
#define TAREA_HUESPEDES_T_BOY_PERSONA_H

#include <iostream>

using std::string;
using std::endl;

class Persona{

private:
    int identificacion;
    string nombre;
    string sexo;
    sring fechaDeNacimiento;
    int puntaje;

public:

    //Gets de atributos clase Persona
    int getIdentificacion();
    string getNombre();
    string getSexo();
    string getFechaDeNacimiento();
    int getPuntaje();

    //Sets de atributos clase Persona
    void setIdentificacion(int identificacion);
    void setNombre(string nombre1);
    void setSexo(string genero);
    void setFechaDeNacimiento(string fechaNacimiento1);
    void setPuntaje(int puntaje);

    //Método para mostrar datos de personas
    void mostrarPersona();

};


#endif //TAREA_HUESPEDES_T_BOY_PERSONA_H
