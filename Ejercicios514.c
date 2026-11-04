#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    char b;
    bool es_digito;
    float angulo, seno_resultado;

    // Datos de entrada
    printf("Aseguradora - Ingrese un un caracter): ");
    scanf(" %c", &b);
    //Proceso
    es_digito = (b >= '0' && b <= '9');

    if (es_digito) {
        printf("SI es un digito.\n");
        angulo = (float)(b - '0'); 
        seno_resultado = sin(angulo);
        
        printf("El valor numerico es %.0f, y su seno (en radianes) es: %.4f\n", angulo, seno_resultado);
    } else {
        printf("El caracter '%c' NO es un digito.\n", b);
    }
    return 0;
}
