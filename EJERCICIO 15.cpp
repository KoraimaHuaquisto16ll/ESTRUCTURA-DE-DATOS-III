#include <stdio.h>

float calcular_promedio(float m1, float m2, float m3) {
    return (m1 + m2 + m3) / 3.0f;
}

int contar_sobre_promedio(float m1, float m2, float m3,
                          float promedio) {
    int contador = 0;

    if (m1 > promedio) {
        contador++;
    }

    if (m2 > promedio) {
        contador++;
    }

    if (m3 > promedio) {
        contador++;
    }

    return contador;
}

int main(void) {
    float m1, m2, m3;
    float promedio;
    int cantidad;

    printf("Ingrese la primera medicion: ");
    scanf("%f", &m1);

    printf("Ingrese la segunda medicion: ");
    scanf("%f", &m2);

    printf("Ingrese la tercera medicion: ");
    scanf("%f", &m3);

    promedio = calcular_promedio(m1, m2, m3);

    cantidad = contar_sobre_promedio(
        m1, m2, m3, promedio
    );

    printf("\nPromedio: %.2f\n", promedio);
    printf("Mediciones sobre el promedio: %d\n",
           cantidad);

    return 0;
}
