#include <stdio.h>

int main(void) {
    double horas, tarifa, costo_total;

    printf("Ingrese las horas trabajadas: ");
    scanf("%lf", &horas);

    printf("Ingrese el costo por hora: ");
    scanf("%lf", &tarifa);

    costo_total = horas * tarifa;

    printf("\nResumen\n");
    printf("Horas: %.2f\n", horas);
    printf("Tarifa por hora: %.2f\n", tarifa);
    printf("Costo total: %.2f\n", costo_total);

    return 0;
}
