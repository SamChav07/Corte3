/*Se desea leer las calificaciones de una clase de informatica y contar 
el numero total de aprobados. (5 o mayor que 5)
*/
#include <iostream>

using namespace std;
int main()
{
    int nota, totalNota, aprobados;
    aprobados = 0;

    cout << "Ingresa el total de nota a digitar: \n";
    cin >> totalNota;
    cout << "\"Considerar 5pts como minimo y 10pts como maximo para aprobar\"" << endl;
// "\"texto\"" -> para mostrar las comillas en el mnsj...
    for (int i = 1; i <= totalNota; i++)
    {
        cout << "Ingrese las calificaciones: " << i << "...";
        cin >> nota;
        if ((nota >= 5) && (nota <= 10))
        { 
         aprobados++;   
        }
    }
    
    cout << "El número total de aprobados es: " << aprobados << endl;

    return 0;
}
