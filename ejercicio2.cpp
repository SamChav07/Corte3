/*Dado el nombre de un mes y si el año es o no bisiesto, deducir el numero de dias del mes*/
#include <iostream>

using namespace std;
bool esBisiesto(int anio);


int main()
{
    int mes, anio;
    cout << "Ingrese el Año: ";
    cin >> anio;
    bool bisiesto = esBisiesto(anio);

    cout << "Ingrese el # del Mes: \n1.Enero \t 2.Febrero \t3.Marzo \t4.Abril \n5.Mayo \t6.Junio \t7.Julio \t8.Agosto \n9.Septiembre \t10.Octubre \t11.Noviembre \t12.Diciembre \n";
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Enero" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;
    case 2:
        cout << "Febrero" << endl;
        if (bisiesto)
        {
            cout << "El mes tiene 29 dias..." << endl;
        }
        else
        {
            cout << "El mes tiene 28 dias..." << endl;
        }
        break;
    case 3:
        cout << "Marzo" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;
    case 4:
        cout << "Abril" << endl;
        cout << "El mes tiene 30 dias..." << endl;
        break;
    case 5:
        cout << "Mayo" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;
    case 6:
        cout << "Junio" << endl;
        cout << "El mes tiene 30 dias..." << endl;
        break;
    case 7:
        cout << "Julio" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;
    case 8:
        cout << "Agosto" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;
    case 9:
        cout << "Septiembre" << endl;
        cout << "El mes tiene 30 dias..." << endl;
        break;
    case 10:
        cout << "Octubre" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;
    case 11:
        cout << "Noviembre" << endl;
        cout << "El mes tiene 30 dias..." << endl;
        break;
    case 12:
        cout << "Diciembre" << endl;
        cout << "El mes tiene 31 dias..." << endl;
        break;

    default:
        cout << "Número Inválido. Ingrese uno del 1 - 12..." << endl;
        break;
    }

    return 0;
}

bool esBisiesto(int anio)
    {
        bool result = false;
        for (int i = 0; i < 1; i++)
        {
            if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
            {
                result = true;
            }
        }

        return result;
    }