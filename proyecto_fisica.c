#include <stdio.h>

//Funciones de Conversión 

double metros_a_pies(double m) {
    return m * 3.28084;
}

double kilogramos_a_libras(double kg) {
    return kg * 2.20462;
}

double celsius_a_fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

double metros_por_seg_a_millas_por_hora(double ms) {
    return ms * 2.23694;
}

//programa Principal

int main() {
    int opcion;
    double valor;

    printf("=== Conversion SI -> Sistema Ingles ===\n");
    printf("1. Metros a Pies\n");
    printf("2. Kilogramos a Libras\n");
    printf("3. Celsius a Fahrenheit\n");
    printf("4. m/s a mph\n");
    printf("5. Salir\n");

    while (1) {
        printf("\nSelecciona una opcion: ");
        if (scanf("%d", &opcion) != 1) {
            printf("Error: Entrada no valida.\n");
            break;
        }

        if (opcion == 5) {
            printf("Saliendo...\n");
            break;
        }

        switch (opcion) {
            case 1:
                printf("Ingresa metros: ");
                scanf("%lf", &valor);
                printf("%.4f [m] = %.4f [ft]\n", valor, metros_a_pies(valor));
                break;
            case 2:
                printf("Ingresa kilogramos: ");
                scanf("%lf", &valor);
                printf("%.4f [kg] = %.4f [lb]\n", valor, kilogramos_a_libras(valor));
                break;
            case 3:
                printf("Ingresa C: ");
                scanf("%lf", &valor);
                printf("%.2f [C] = %.2f [F]\n", valor, celsius_a_fahrenheit(valor));
                break;
            case 4:
                printf("Ingresa m/s: ");
                scanf("%lf", &valor);
                printf("%.3f [m/s] = %.3f [mph]\n", valor, metros_por_seg_a_millas_por_hora(valor));
                break;
            default:
                printf("Opcion invalida, intenta de nuevo.\n");
        }
    }

    return 0;
}
