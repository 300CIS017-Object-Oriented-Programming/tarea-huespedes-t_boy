#include "Sistema.h"

int main(){
    auto *sistema = new Sistema();

    int opcion;
    do {
        cout << "BIENVENIDOS T-BOY ALOJAMIENTOS" << endl;
        cout << "******************************\n" << endl;

        cout << "1) Cambiar la onformacion del Hogar\n" << endl;
        cout << "2) Crear una reserva\n" << endl;
        cout << "3) Eliminar reserva\n" << endl;
        cout << "4) Añadir evalcuacion\n" << endl;
        cout << "-1) Salir\n" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
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
    } while (opcion != -1);
    return 0;
}

int main()
{
    Sistema sistema;
    menu(sistema);
    return 0;
}