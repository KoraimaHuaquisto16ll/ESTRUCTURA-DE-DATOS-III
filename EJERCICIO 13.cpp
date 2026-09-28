#include <stdio.h>

int main(void) {
    int edades[10];
    int suma = 0;
    int minimo, maximo;
    int sobre_promedio = 0;
    float promedio;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese la edad %d: ", i + 1);
        scanf("%d", &edades[i]);
        suma += edades[i];
    }

    minimo = edades[0];
    maximo = edades[0];

    for (int i = 1; i < 10; i++) {
        if (edades[i] < minimo) {
            minimo = edades[i];
        }

        if (edades[i] > maximo) {
            maximo = edades[i];
        }
    }

    promedio = suma / 10.0f;

    for (int i = 0; i < 10; i++) {
        if (edades[i] > promedio) {
            sobre_promedio++;
        }
    }

    printf("\nEdad minima: %d\n", minimo);
    printf("Edad maxima: %d\n", maximo);
    printf("Edad promedio: %.2f\n", promedio);
    printf("Edades sobre el promedio: %d\n",
           sobre_promedio);

    return 0;
}
