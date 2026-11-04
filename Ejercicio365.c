#include <stdio.h>
int main() {
    float CERO_ABS_C = -273.15, FACTOR_C_F = 1.8, OFFSET_C_K = 273.15;
    int OFFSET_C_F = 32;
    float temperatura_origen;
    char unidad_origen;
    char unidad_destino;
    float temperatura_convertida = 0.0;
    float mitad_resultado = 0.0;
    int es_valida = 1;

    // Bienvenida
    printf("==================================================\n ");
    printf("Bienvenido al Sistema de Control\n");
    printf("==================================================\n");
    // Datos de entrada
    printf("Ingrese la temperatura actual: ");
    scanf("%f", &temperatura_origen);
    printf("Ingrese la unidad de origen (C = Celsius, F = Fahrenheit, K = Kelvin): ");
    scanf(" %c", &unidad_origen);
    printf("Ingrese la unidad de destino (C = Celsius, F = Fahrenheit, K = Kelvin): ");
    scanf(" %c", &unidad_destino);

    // Evaluación de la expresión
    if (unidad_origen == 'C' || unidad_origen == 'c') {
        if (temperatura_origen < CERO_ABS_C) {
            es_valida = 0;
        }
    } else if (unidad_origen == 'K' || unidad_origen == 'k') {
        if (temperatura_origen < 0.0f) {
            es_valida = 0;
        }
    } else if (unidad_origen == 'F' || unidad_origen == 'f') {
        // Cero absoluto en Fahrenheit es aproximadamente -459.67
        float cero_abs_f = (CERO_ABS_C * FACTOR_C_F) + OFFSET_C_F;
        if (temperatura_origen < cero_abs_f) {
            es_valida = 0;
        }
    } else {
        es_valida = 0; // Unidad de origen desconocida
    }
    // conversión si la temperatura es válida
    if (es_valida == 1) {
        
        // Si el origen y el destino son iguales, no se requiere conversión aritmética
        if (unidad_origen == unidad_destino) {
            temperatura_convertida = temperatura_origen;
        } 
        // Conversiones desde CELSIUS
        else if (unidad_origen == 'C' || unidad_origen == 'c') {
            if (unidad_destino == 'F' || unidad_destino == 'f') {
                temperatura_convertida = (temperatura_origen * FACTOR_C_F) + OFFSET_C_F;
            } else if (unidad_destino == 'K' || unidad_destino == 'k') {
                temperatura_convertida = temperatura_origen + OFFSET_C_K;
            }
        } 
        // Conversiones desde KELVIN
        else if (unidad_origen == 'K' || unidad_origen == 'k') {
            if (unidad_destino == 'C' || unidad_destino == 'c') {
                temperatura_convertida = temperatura_origen - OFFSET_C_K;
            } else if (unidad_destino == 'F' || unidad_destino == 'f') {
                temperatura_convertida = ((temperatura_origen - OFFSET_C_K) * FACTOR_C_F) + OFFSET_C_F;
            }
        } 
        else if (unidad_origen == 'F' || unidad_origen == 'f') {
            if (unidad_destino == 'C' || unidad_destino == 'c') {
                temperatura_convertida = (temperatura_origen - OFFSET_C_F) / FACTOR_C_F;
            } else if (unidad_destino == 'K' || unidad_destino == 'k') {
                temperatura_convertida = ((temperatura_origen - OFFSET_C_F) / FACTOR_C_F) + OFFSET_C_K;
            }
        }

        // Cálculo adicional
        mitad_resultado = temperatura_convertida / 2.0f;

        printf("Resultado de la conversión: %.2f %c\n", temperatura_convertida, unidad_destino);
        printf("La mitad del resultado obtenido es: %.2f %c\n", mitad_resultado, unidad_destino);

    } else {
        printf("Error: La temperatura ingresada no es válida o está por debajo del cero absoluto.\n");
    }
    return 0;
}
