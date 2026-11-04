#include <stdio.h>
#include <math.h>

int main() {
    float monto = 0;
    float mitad_monto;
    int centavos, total_inicial;
    int BILLETE_100 = 100, BILLETE_50 = 50, BILLETE_20 = 20, BILLETE_10 = 10,MONEDA_5 = 5, MONEDA_1 = 1;
    int b100 = 0, b50 = 0, b20 = 0, b10 = 0, m5 = 0, m1 = 0;

    printf("Ingrese el monto en dolares: ");
    scanf("%f", &monto);

    // Evaluación
    if (monto > 0) {
        centavos = (int)roundf(monto * 100);
        total_inicial = centavos;

        b100 = centavos / (BILLETE_100 * 100);
        centavos = centavos % (BILLETE_100 * 100);

        b50 = centavos / (BILLETE_50 * 100);
        centavos = centavos % (BILLETE_50 * 100);

        b20 = centavos / (BILLETE_20 * 100);
        centavos = centavos % (BILLETE_20 * 100);

        b10 = centavos / (BILLETE_10 * 100);
        centavos = centavos % (BILLETE_10 * 100);

        m5 = centavos / (MONEDA_5 * 100);
        centavos = centavos % (MONEDA_5 * 100);

        m1 = centavos / (MONEDA_1 * 100);
        centavos = centavos % (MONEDA_1 * 100);

        printf("\n================ DESGLOSE ================\n");
        printf("Billetes de 100: %d\n", b100);
        printf("Billetes de 50: %d\n", b50);
        printf("Billetes de 20: %d\n", b20);
        printf("Billetes de 10: %d\n", b10);
        printf("Monedas de 5: %d\n", m5);
        printf("Monedas de 1: %d\n", m1);
        
        if (centavos > 0) {
            printf("Sobrante en centavos: %.2f\n", (float)centavos / 100);
        }

        mitad_monto = (float)total_inicial / 2 / 100;
        printf("La mitad del monto ingresado es: %.2f\n", mitad_monto);

    } else if (monto == 0) {
        printf("El monto es cero. No hay elementos que desglosar.\n");
    } else {
        printf("Error: El monto ingresado debe ser mayor a cero.\n");
    }
    return 0;
}
