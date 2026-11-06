#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de datos: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: ingrese una cantidad mayor que cero.";
        return 0;
    }

    vector<double> datos(n);

    // Ingreso de datos
    cout << "\nIngrese exactamente " << n << " datos:\n";

    for (int i = 0; i < n; i++) {
        cout << "Dato " << i + 1 << ": ";
        if (!(cin >> datos[i])) {
            cout << "Error: dato invalido.";
            return 0;
        }
    }

    // Calcular promedio
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma += datos[i];
    }

    double promedio = suma / n;

    // Ordenar datos
    sort(datos.begin(), datos.end());

    // Calcular minimo y maximo
    double minimo = datos[0];
    double maximo = datos[n - 1];

    // Calcular mediana (Q2)
    double q2;

    if (n % 2 == 0) {
        q2 = (datos[n / 2 - 1] + datos[n / 2]) / 2;
    } else {
        q2 = datos[n / 2];
    }

    // Calcular varianza
    double sumaCuadrados = 0;

    for (int i = 0; i < n; i++) {
        sumaCuadrados += pow(datos[i] - promedio, 2);
    }

    double varianza = 0;

    if (n > 1) {
        varianza = sumaCuadrados / (n - 1);
    }

    // Desviacion estandar
    double desviacion = sqrt(varianza);

    // Coeficiente de variacion
    double cv = 0;

    if (promedio != 0) {
        cv = (desviacion / abs(promedio)) * 100;
    }

    // Mostrar resultados
    cout << fixed << setprecision(4);

    cout << "\n===== ANALISIS ESTADISTICO =====\n";
    cout << "Cantidad de datos       : " << n << endl;
    cout << "Minimo                  : " << minimo << endl;
    cout << "Maximo                  : " << maximo << endl;
    cout << "Mediana (Q2)            : " << q2 << endl;
    cout << "Promedio                : " << promedio << endl;
    cout << "Varianza muestral       : " << varianza << endl;
    cout << "Desviacion estandar     : " << desviacion << endl;

    if (promedio != 0) {
        cout << "Coeficiente variacion   : " << cv << " %" << endl;
    } else {
        cout << "Coeficiente variacion   : No definido" << endl;
    }

    return 0;
}
