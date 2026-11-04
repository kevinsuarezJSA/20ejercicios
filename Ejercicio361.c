#include <stdio.h>
int main() {
    float ingresos = 0, costos_fijos = 0, costos_variables = 0, pct_impuestos = 0;
    float utilidad_bruta = 0, impuestos = 0, utilidad_neta = 0, bono = 0, mitad_utilidad = 0;
    float PORCENTAJE = 100, UMBRAL_UTILIDAD = 0.0, BONO_EMPLEADOS = 0.10;

    // Datos de entrada
    printf("Ingrese los ingresos totales: ");
    scanf("%f", &ingresos);
    printf("Ingrese los costos fijos: ");
    scanf("%f", &costos_fijos);
    printf("Ingrese los costos variables: ");
    scanf("%f", &costos_variables);
    printf("Ingrese el porcentaje de impuestos a aplicar (ej. 15): ");
    scanf("%f", &pct_impuestos);

    // Proceso
    utilidad_bruta = ingresos - (costos_fijos + costos_variables);
    impuestos = (utilidad_bruta * pct_impuestos) / PORCENTAJE;
    utilidad_neta = utilidad_bruta - impuestos;
    bono = utilidad_neta * BONO_EMPLEADOS;

    // Evaluar
    printf("           DESGLOSE DE UTILIDADES           \n");
    printf("Utilidad Bruta: %.2f\n", utilidad_bruta);
    printf("Impuestos: %.2f\n", impuestos);
    printf("Utilidad Neta: %.2f\n", utilidad_neta);

    if (utilidad_neta > UMBRAL_UTILIDAD) {
        printf("Resultado: La empresa genera ganancias estables.\n");
        printf("Bono Empleados: %.2f \n", bono);
    } else {
        printf("Resultado: La empresa esta en punto de equilibrio o perdidas.\n");
        printf("Bono Empleados:(No aplica por falta de ganancias)\n");
    }

    mitad_utilidad = utilidad_neta / 2.0f;
    printf("Mitad de la U. Neta: %.2f\n", mitad_utilidad);

    printf("\n--- CONCLUSIONES ---\n");
    printf("1. El uso de la constante UMBRAL_UTILIDAD permite observar si un negocio es rentable o no.\n");
    printf("2. Los costos fijos y variables operan como un reductor directo del beneficio real.\n");
    return 0;
}
