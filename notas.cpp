#include <iostream>

using namespace std;

int promedio (){

    const int MAX_NOTAS = 5;
        int cantidadNotas;
        float notas[MAX_NOTAS];
        float sumaNotas = 0;
        float promedio;


        cout << "Ingrese la cantidad de notas: " << endl;
        cin >> cantidadNotas;


        if (cantidadNotas <= 0 || cantidadNotas > MAX_NOTAS) {
            cout << "Cantidad de notas inválida." << endl;
            return 0;
        }


        for (int i = 0; i < cantidadNotas; i++) {
            cout << "Ingrese la nota " << (i + 1) << ": ";
            cin >> notas[i];


            if (notas[i] < 0 || notas[i] > 5) {
                cout << "Nota inválida. Ingrese una nota entre 0 y 5." << endl;
                i--;
            } else {
                sumaNotas += notas[i];
            }
        }


        promedio = sumaNotas / cantidadNotas;


        cout << "El promedio de las notas es: " << promedio << std::endl;

        return 0;
    }

