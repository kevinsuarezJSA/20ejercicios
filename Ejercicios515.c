#include <stdio.h>
#include <math.h>

int main() {
    float celsius = 0, kelvin = 0, potencia_cuarta = 0, OFFSET = 273.15;

    printf("======= =========== ============ ========== ======= ===\n");
    printf(" BIENVENIDO AL SISTEMA DE CONTROL \n");
    printf("======== =========== ============ =========== ======= =\n");

    // Dato de entrada
    printf("Ingrese la temperatura actual del combustible en Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + OFFSET;

    // Evaluar la expresion
    if (kelvin >= 0) {
        printf("%.2f C equivalen a %.2f K\n", celsius, kelvin);

        potencia_cuarta = powf(kelvin, 4);
        //4e es la notacion cientifica
        printf("Aplicacion adicional (K elevado a la 4): %.4e\n", potencia_cuarta);
    } else {
        printf("Error: La temperatura ingresada es inferior al cero absoluto");
    }
    return 0;
}
