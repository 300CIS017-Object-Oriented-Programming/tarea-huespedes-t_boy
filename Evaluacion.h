#ifndef TAREA_HUESPEDES_T_BOY_EVALUACION_H
#define TAREA_HUESPEDES_T_BOY_EVALUACION_H

#include <Propietario.h>
#include <Huesped.h>

using std::string;
using std::endl;

class Evaluacion{
private:
    int calificacion;
    string comentarios;
    Huesped *emisor;
    Propietario *receptor;

public:

    //Gets de la clase Evaluacion
    int getCalificacion();
    string getComentarios();
    Huesped *getEmisor() const;
    Propietario *getReceptor() const;

    //Sets de la clase Evaluacion
    void setCalificacion(int calificacion);
    void setComentarios(string comentarios1);
    void setEmisor(Huesped *emisor1);
    void setReceptor(Propietario *receptor1);
    void mostrarEvaluacion();

};



#endif //TAREA_HUESPEDES_T_BOY_EVALUACION_H
