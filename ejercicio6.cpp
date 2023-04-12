/*Se desea leer las calificaciones de una clase de informatica y contar 
el numero total de aprobados. (5 o mayor que 5)
*/
#include <iostream>

using namespace std;
int main()
{
    int nota, totalNota, Aprobados;
    totalNota = 0;
    Aprobados = 0;

    cout << "Ingresa el total de nota a digitar: \n";
    cin >> totalNota;


    for (int i = 1; i <= totalNota; i++)
    {
        cout << "Ingrese las calificaciones: " << i << "...";
        cin >> nota;
        if (nota >= 5)
        { 
         Aprobados++;   
        }
    }
    
    cout << "El número total de aprobados es: " << Aprobados << endl;

    return 0;
}
