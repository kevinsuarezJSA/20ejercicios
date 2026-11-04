#include <stdio.h>
#include <stdbool.h>

int main(){
    char n;
    bool es_vocal_minuscula;
    int cuadrado = 0;

    printf("Ingrese una vocal: ");
    scanf("%c", &n);

    es_vocal_minuscula = (n == 'a'|| n == 'e'||n == 'i'||n == 'o'||n == 'u');
    cuadrado = es_vocal_minuscula * es_vocal_minuscula;

    if(es_vocal_minuscula){
        printf("Es una vocal minuscula \n");
    }else{
        printf("No es una vocal miniscula \n");
    }

    printf("Variable 'n'(Caracter) es: %c \n", n);
    printf("Variable 'es_vocal_minuscula'(Booleano) es: %d \n", es_vocal_minuscula);
    printf("El resultado (entero) de elevar al cuadrado es: %d \n", cuadrado);
    printf("Se uso OR por que en este caso necesitamos la opcion de verificar que el caracter ingresado sea una o cumpla una de las condiciones propuestas");
    
    return 0;
}