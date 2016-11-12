/*
*ARAUJO MORENO ALEXIS ABRAHAM
*/
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
    //sabe
    cout << "                           ||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "                           ||                                  ||" << endl;
    cout << "                           ||                                  ||" << endl;
    cout << "                           ||                                  ||" << endl;
    cout << "                           ||       CALCULADORA HECHO EN       ||" << endl;
    cout << "                           ||               C++                ||" << endl;
    cout << "                           ||                                  ||" << endl;
    cout << "                           ||                                  ||" << endl;
    cout << "                           ||||||||||||||||||||||||||||||||||||||\n\n" << endl;

    //declaramos las variables
    bool suma = false;
    bool resta = false;
    bool division = false;
    bool multiplicacion = false;
    bool cicloCalculadora = true;
    int operacion;
    int decision;


    while(cicloCalculadora == true)
    {
        cout << "Ingrese el numero de algunas de las operaciones que quiera realizar" << endl;
        cout << "\n1. suma" << endl;
        cout << "2. resta" << endl;
        cout << "3. multiplicacion" << endl;
        cout << "4. division" << endl;

        cin >> operacion;

        if(operacion > 0 && operacion < 5)
        {
            double numero1;
            double numero2;
            double resultado;

            switch (operacion)
            {
            //en caso de que sea 1
            case 1:
                    cout << "Ingrese el primer numero: " << endl;
                    cin >> numero1;
                    cout << "Ingrese el segundo numero: " << endl;
                    cin >> numero2;

                    //establecemos el resultado
                    resultado = numero1 + numero2;

                    //imprimimos el resultado
                    cout << "Tu resultado de la suma es: " << resultado << "\n" <<endl;
                break;

            //en caso de que sea 2
            case 2:
                    cout << "Ingrese el primer numero: " << endl;
                    cin >> numero1;
                    cout << "Ingrese el segundo numero: " << endl;
                    cin >> numero2;

                    //establecemos el resultado
                    resultado = numero1 - numero2;

                    //imprimimos el resultado
                    cout << "Tu resultado de la resta es: " << resultado << "\n" <<endl;
                break;

            //en caso de que sea 3
            case 3:
                    cout << "Ingrese el primer numero: " << endl;
                    cin >> numero1;
                    cout << "Ingrese el segundo numero: " << endl;
                    cin >> numero2;

                    //establecemos el resultado
                    resultado = numero1 / numero2;

                    //imprimimos el resultado
                    cout << "Tu resultado de la division es: " << resultado << "\n" <<endl;

                    break;

            //en caso de que sea 4
            case 4:
                    cout << "Ingrese el primer numero: " << endl;
                    cin >> numero1;
                    cout << "Ingrese el segundo numero: " << endl;
                    cin >> numero2;

                    //establecemos el resultado
                    resultado = numero1 * numero2;

                    //imprimimos el resultado
                    cout << "Tu resultado de la multiplicacion es: " << resultado << "\n" <<endl;

                    break;
            }

            cout<<"Desea realizar otra operacion?"<<endl;
            cout<<"Teclee 1 para si o 2 para no:"<<endl;
            cout<<"\n1. Si"<<endl;
            cout<<"2. No"<<endl;
            cin>>decision;

            if(decision == 1)
            {
                //termina el ciclo y se termina el programa calculadora
                cicloCalculadora == 1;
            }
            else
            {
                //seguira haciendo otra operacion matematica
                cicloCalculadora = 0;
            }
        }
        else
        {
            cout << "Ingresa de nuevo, una de las opciones, del 1 al 4!!!\n" << endl;
        }

    }

    system("pause");
    return 0;
}




