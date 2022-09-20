#include "Sistema.h"

int main(){
    auto *sistema = new Sistema();

    int arn;
    do {
        cout << "BIENVENIDOS T-BOY ALOJAMIENTOS" << endl;
        cout << "******************************\n" << endl;

        cout << "1) Ver la informacion\n" << endl;
        cout << "2) Crear una reserva\n" << endl;
        cout << "3) Eliminar reserva\n" << endl;
        cout << "4) Añadir evalcuacion\n" << endl;
        cout << "-1) Salir\n" << endl;
        cout << "Elija una opcion: ";
        cin >> arn;

        switch (arn) {
            case 1:
                sistema->crearReservas();
                break;
            case 2:
                sistema->liberarReservas();
                break;
            case 3:
                sistema->agregarEvaluaciones();
                break;
            default:
                break;
        }
    } while (arn != -1);
    return 0;
}