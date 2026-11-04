#include <stdio.h>
#include <stdbool.h>
int main(){
    float kb = 0, mb = 0;
    int lit = 1024;
    bool expresion;
    double valor_maxim;
    printf("Ingrese el valor de kilobytes: ");
    scanf("%f", &kb);
    expresion = (kb >= 0);

    if(expresion){
        mb = kb/lit;
        valor_maxim = kb;
        printf("%f kb es %f en mb\n", kb, mb);

        if(mb > valor_maxim){
            valor_maxim = mb;
        }
        printf("El valor maximo registrado es: %.4f",valor_maxim);
    }else{
        printf("Error: El tamaño de kilobytes ingresado no es valido");
    }
    return 0;
}