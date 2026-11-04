#include <stdio.h>
int main(){
    float h = 0, PIE_METRO = 0.3048, metros = 0, pariedad = 0;

    printf("Ingrese el valor de la altura en pies:");
    scanf("%f", &h);

    metros = h * PIE_METRO;

    if(metros > 0){
        printf("Los metros son positivos\n");
    }else{
        printf("Los metros son negativos\n");
    }
    printf("%f pies es equivalente a %f metros\n", h, metros);

    pariedad = ((int)metros) % 2;
    if(pariedad == 0){
        printf("El valor de metros es par \n");
    }else{
        printf("El valor de metros es impar \n");
    }
    return 0;
}