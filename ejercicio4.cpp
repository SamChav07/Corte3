/*Determina la media de una lista de numeros + terminada con un numero no positivo despues del ultimo numero valido*/
#include <iostream>

using namespace std;
int main()
{
    int num, cont = 0;
    double suma = 0, media = 0;
    cout << "Ingrese varios numeros positivos y termina la lista con uno no positivo: ";

    for (;;) /*esta es una condicion vacia, no se que poner aqui*/
    {
        cin >> num;
        if (num <= 0)
        {
            break;
        }
        suma += num;
        cont++;
    }
    if (cont > 0)
    {
        media = suma / cont;
        cout << "La media es de: " << media << endl;
    } else {
        cout << "No hay # positivos..." << endl; 
    }
    
    return 0;
}
