/*Leer 100 nums. Determinar la media de los numeros positivos
y la media de los numeros negativos.*/
#include "mymodule.h"
#include <iostream>
using namespace std;
void ejercicio7();

int main()
{
    int contPositiv = 0, contNegativ = 0;
    double sumaPositiv = 0, sumaNegativ = 0, mediaPositiv = 0, mediaNegativ = 0;
    cout << "Ingrese varios numeros positivos y negativos: ";

    for (int i = 0; i < 100; i++) /*estaba horrible este ejerc profe...*/
    {
        int num;
        cin >> num;
        if (num >= 0)
        {
            sumaPositiv += num;
            contPositiv++;
        } else {
            sumaNegativ += num;
            contNegativ++;
        }
    }
    
    if (contPositiv > 0)
    {
        mediaPositiv = sumaPositiv / contPositiv;
        cout << "La media Positiva es de: " << mediaPositiv << endl;
    } else  {
        cout << "No hay numeros positivos..." << endl;  
    }
    if (contNegativ > 0)
    {
        mediaNegativ = sumaNegativ / contNegativ;
        cout << "La media Negativa es de: " << mediaNegativ << endl;
    } else {
        cout << "No hay numeros negativos..." << endl;
    }
    
    return 0;
}


