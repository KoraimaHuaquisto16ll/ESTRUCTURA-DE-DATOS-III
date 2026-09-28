/* Ejercicio 10
   Ingresa 10 observaciones con un ciclo for, calcula la media
   aritmetica y cuenta cuantas estan por encima de la media. */
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    double valores[N];
    double suma = 0.0;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese la observacion " << (i + 1) << ": ";
        cin >> valores[i];
        suma += valores[i];
    }

    double media = suma / N;

    int contador_sobre_media = 0;
    for (int i = 0; i < N; i++) {
        if (valores[i] > media) {
            contador_sobre_media++;
        }
    }

    cout << "\nMedia aritmetica: " << media << endl;
    cout << "Observaciones por encima de la media: " << contador_sobre_media << endl;

    return 0;
}

