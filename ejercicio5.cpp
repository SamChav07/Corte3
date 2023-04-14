/*imprimir todos los numeros primos entre 2 y 1,000 inclusive*/
#include "mymodule.h"
#include <iostream>
using namespace std;
void ejercicio4();

int main()
{
    int num, i;
    bool esPrimo;

    cout << "Numeros primos del 2 al 1,000 " << endl;
    for (num = 2; num <= 1000; num++)
    {
        esPrimo = true;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
        {
            cout << num << " ";
        }
        
    }

    cout << endl;
    
    return 0;
}
