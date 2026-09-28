/* Ejercicio 12
   Procesa una secuencia de 10 mediciones. Los valores negativos se
   omiten con continue; el valor 999 termina el proceso con break. */
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int valor;
    int validos = 0;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese la medicion " << (i + 1) << ": ";
        cin >> valor;

        if (valor == 999) {
            cout << "Valor centinela 999 detectado. Finalizando procesamiento.\n";
            break;
        }

        if (valor < 0) {
            cout << "Valor invalido, se omite.\n";
            continue;
        }

        validos++;
    }

    cout << "\nNumero de valores validos procesados: " << validos << endl;

    return 0;
}

