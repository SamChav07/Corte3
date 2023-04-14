/*determinar la media de una lista indefinida de numeros positivos, terminados con numeros negativos#*/
#include <iostream>

using namespace std;
void ejercicio1();

void calcMedia();
bool esPositivo(int num);

void calcMedia()
{
    int num = 0, suma = 0, cant = 0;
    float media = 0;
    for (int i = 0; num >= 0; i++)
    {
        cout << "Dime un #: ";
        cin >> num;
        if (esPositivo(num))
        {
            suma += num;
            cant++;
        }
    }
    if (cant > 0)
    {
        media = suma / cant;
        cout << "La media es " << media << endl;
    }
    else
    {
        cout << "No se ingresaron numeros positivos..." << endl;
    }
    
}

bool esPositivo(int num)
{
    return num >= 0;
}

int main()
{
    calcMedia();
    return 0;
}