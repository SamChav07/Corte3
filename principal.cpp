#include <iostream>
#include "ejercicio1.cpp"
#include "ejercicio2.cpp"
#include "ejercicio4.cpp"
#include "ejercicio5.cpp"
#include "ejercicio6.cpp"
#include "ejercicio7.cpp"
#include "ejercicio8.cpp"

using namespace std;

void menu()
{
    cout << "" << endl; 
    cout << "1. Determinar la media de una lista indefinida de numeros positivos, terminados con numeros negativos#" << endl;
    cout << "2. Dado el nombre de un mes y si el año es o no bisiesto, deducir el numero de dias del mes" << endl;
    cout << "3. Determina la media de una lista de numeros + terminada con un numero no positivo despues del ultimo numero valido" << endl;
    cout << "4. Imprimir todos los numeros primos entre 2 y 1,000 inclusive" << endl;
    cout << "5. Se desea leer las calificaciones de una clase de informatica y contar el numero total de aprobados. (5 o mayor que 5)" << endl;
    cout << "6. Leer las notas de una clase de informatica y deducir todas aquellas que son NOTABLES (>=7 y <9)" << endl;
    cout << "7. Leer 100 nums. Determinar la media de los numeros positivos y la media de los numeros negativos" << endl;
    cout << "0. Salir..." << endl;
}

int main()
{
    int opcion;
    do {
        menu();
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
        case 0:
            cout << "<<-Saliendo del programa->>" << endl;
        break;
        default:
        cout << "Opción Invalida. Ingrese un numero del 1 - 7..." << endl;
        break;
        }
    } while (opcion != 0);
    
    return 0;
}