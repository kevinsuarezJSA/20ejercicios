#include <stdio.h>
int main() {
    float salario_promedio = 0;
    int anos_cotizacion = 0;
    int edad = 0;
    int anos_para_bono;
    float porcentaje;
    float pension;
    float mitad_pension;
    float PORCENTAJE_BASE = 0.50, INCREMENTO_POR_AÑO = 0.02;
    int EDAD_MIN = 60, AÑOS_MIN = 15, AÑOS_MAX_BONO = 10;
    int limite_anos, anos_efectivos;
    //Datos de entrada
    printf("Ingrese el salario promedio: ");
    scanf("%f", &salario_promedio);
    printf("Ingrese los años de cotización: ");
    scanf("%d", &anos_cotizacion);
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (edad >= EDAD_MIN && anos_cotizacion >= AÑOS_MIN) {
        limite_anos = AÑOS_MIN + AÑOS_MAX_BONO;

        if (anos_cotizacion < limite_anos) {
            anos_efectivos = anos_cotizacion;
        } else {
            anos_efectivos = limite_anos;
        }

        anos_para_bono = anos_efectivos - AÑOS_MIN;

        porcentaje = PORCENTAJE_BASE + (anos_para_bono * INCREMENTO_POR_AÑO);
        pension = salario_promedio * porcentaje;
        
        mitad_pension = pension / 2;

        printf("Estado: Cumple con los requisitos de jubilación.\n");
        printf("Porcentaje aplicado: %.2f\n", porcentaje * 100);
        printf("Pensión total calculada: %.2f\n", pension);
        printf("La mitad de la pensión: %.2f\n", mitad_pension);

    } else {
        printf("\n--- RESULTADOS DEL CÁLCULO ---\n");
        printf("NO cumple con los requisitos mínimos para la jubilación.\n");
        printf("Se requiere un mínimo de %d años de edad y %d años de cotización.\n", EDAD_MIN, AÑOS_MIN);
    }
    return 0;
}
