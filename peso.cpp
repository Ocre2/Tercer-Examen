#include <iostream>

using namespace std;

float imc(){
    int peso;
    float altura;
    float total;

    cout << "Digite su peso en kilogramos" << endl;
    cin >> peso;
    cout << "Digite su altura en metros" << endl;
    cin >> altura;
    total = peso/(altura*altura);

    if (total < 18.5){
        cout << "Peso insuficiente" << endl;
    }
    if (total >= 18.5 & total <= 24.9){
        cout << "Peso nomral" << endl;
    }
    if (total >=25 & total<= 29.9){
        cout << "Sobre peso" << endl;
    }
    if (total >= 30){
        cout << "Obesidad" << endl;
    }
    return 0;
}
