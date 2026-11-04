#include <stdio.h>
#include <stdbool.h>
int main(){
    float pi = 3.1416, producto_pi = 0;
    char y;
    bool es_mayuscula;
    printf("Ingrese un caracter: ");
    scanf("%c", &y);

    es_mayuscula = (y >= 'A' && y <= 'Z'); 
    if(es_mayuscula){
        printf("Es mayuscula \n");
    }else{
        printf("No es mayuscula \n");
    }

    producto_pi = es_mayuscula * pi;
    printf("El resultado del producto pi es: %f ", producto_pi);

    return 0;
}