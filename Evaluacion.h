#ifndef TAREA_HUESPEDES_T_BOY_EVALUACION_H
#define TAREA_HUESPEDES_T_BOY_EVALUACION_H

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
    int int setCalificacion();
    string setComentarios();
    void setEmisor();
    void setReceptor();
    void mostrarEvaluacion();

};



#endif //TAREA_HUESPEDES_T_BOY_EVALUACION_H
