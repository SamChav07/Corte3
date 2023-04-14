#include "mymodule.h"
#include <iostream>

using namespace std;

int main()
{
    int opcion;
    cout << "Ingrese el ejercicio a ejecutar (1-7):\t" << endl; 
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        ejercicio1();
        break;
    case 2:
        ejercicio2();
        break;
    case 3:
        ejercicio3();
     break;
    case 4:
        ejercicio4();
     break;
    case 5:
        ejercicio5();
     break;
    case 6:
        ejercicio6();
     break;
    case 7:
        ejercicio7();
     break;

    default:
        cout << "Opción Inválida. Ingrese un número del 1 - 7..." << endl;
        break;
    }

    return 0;
}
