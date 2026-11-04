#include <stdio.h>
int main() {
    // Declaración de variables
    float p = 0, h = 0, imc = 0, inverso = 0, LIMITE_ALTO = 24.9, LIMITE_BAJO = 18.5;

    // Datos de entrada
    printf("Ingrese el peso en kg: ");
    scanf("%f", &p);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &h);

    // Validación
    if (h > 0 && p > 0) {
        
        imc = p / (h * h);
        printf("El IMC calculado es: %f \n", imc);

        if (imc >= LIMITE_BAJO && imc <= LIMITE_ALTO) {
            printf("El IMC esta en el rango normal.\n");
        } else {
            printf("El IMC NO esta en el rango normal.\n");
        }

        // Calcular el inverso
        if (imc != 0) {
            inverso = 1.0 / imc;
            printf("El inverso del IMC es: %.2f \n", inverso);
        } else {
            printf("No se puede calcular el inverso porque el IMC es cero. \n");
        }

    } else {
        printf("Error: El peso y la altura deben ser mayores a cero. \n");
    }

    printf("------------ CONCLUSIONES ---------- \n");
    printf("1. El algoritmo evalua eel estado nutricional basandose en rangos fijos. \n");
    printf("2. El uso de constantes simbolicas facilita el calculo. \n");

    return 0;
}
