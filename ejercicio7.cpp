/*Leer las notas de una clase de informatica y 
deducir todas aquellas que son NOTABLES (>=7 y <9).*/
#include "mymodule.h"
#include <iostream>
using namespace std;
void ejercicio6();

int main()
{
    int cant;
    float num, notable;
    cant = 0;
    notable = 0;

    cout << "Las notas serán NOTABLES si tienen un Min de 7pts y un Max de 9pts..." << endl;
    cout << "Ingresa cantidad de notas:\t";
    cin >> cant;
    for (int i = 1; i <= cant; i++)
    {
        cout << "Ingrese la nota:\t" << i << "...";
        cin >> num;
        if ((num >= 7) && (num < 9))
        {
            notable++;
        }
    }
    
    cout << "El numero de Notas Notables es de:\t" << notable << endl;
    if (notable <= 0)
    {
        cout << "No hay Notas NOTABLES para presentar..." << endl;
    }

    return 0;
}
