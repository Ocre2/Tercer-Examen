#include <iostream>
#include "peso.cpp"
#include "numpares.cpp"
#include "notas.cpp"
#include "retsuma.cpp"
using namespace std;


int main() {

    int opcion;

    do {
        cout << ".... MENU...." << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" <<endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "5 Salir" << endl;
        cin >> opcion;


        switch (opcion) {
            case 1: {
                float primero = imc();
                cout << primero;
                break;
            }


            case 2: {
                int num = secuencia();
                cout << num;
                break;
            }

            case 3: {
                int prom = promedio();
                cout << prom;
                break;
            }

            case 4: {
                int num1;
                int num2;

                cout << "Digite el primer numero" << endl;
                cin >> num1;
                cout << "Digite el segundo numero" << endl;
                cin >> num2;
                int resultado = suma(num1,num2);
                cout << "El resultado es : "<<resultado;
                break;
            }
            
        }
        cout <<endl;

    } while (opcion != 5);




    return 0;
}
