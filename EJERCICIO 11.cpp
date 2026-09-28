/* Ejercicio 11
   Solicita repetidamente una clave numerica mediante un ciclo while,
   cuenta los intentos y finaliza cuando la clave es correcta. */
#include <iostream>
using namespace std;

int main() {
    const int CLAVE_CORRECTA = 2026;
    int clave_ingresada;
    int intentos = 0;

    cout << "Ingrese la clave numerica de acceso." << endl;

    do {
        cout << "Clave: ";
        cin >> clave_ingresada;
        intentos++;
    } while (clave_ingresada != CLAVE_CORRECTA);

    cout << "\nClave correcta. Numero de intentos realizados: " << intentos << endl;

    return 0;
}

