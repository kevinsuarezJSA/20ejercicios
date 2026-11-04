#include <stdio.h>

int main(){
    char n;
    int lit = 32, resultado, factorial;

    char s;
    printf("Ingrese un caracter: ");
    scanf("%c", &n);

    if(n >= 'A' && n <= 'Z'){
        s = n + lit;
        printf("El caracter original es: %c \n", n);
        printf("La mayuscula del caracter original es: %c \n", s);
        resultado = (unsigned char)s;
        if (resultado > 0 && resultado < 10){
            if(resultado == 1){
                factorial = 1;
            }else if(resultado == 2){
                factorial = 2;
            }else if(resultado == 3){
                factorial = 6;
            }else if(resultado == 4){
                factorial = 24;
            }else if(resultado == 5){
                factorial = 120;
            }else if(resultado == 6){
                factorial = 720;
            }else if(resultado == 7){
                factorial = 5040;
            }else if(resultado == 8){
                factorial = 40320;
            }else if(resultado == 9){
                factorial = 362880;
            }
            printf("El factorial es: %d \n", factorial);
        }else{
            printf("No se pudo calcular el factorial...perdon :c");
        }
    }else{
        printf("El caracter ingresado no es mayuscula");
    }
    return 0;
}