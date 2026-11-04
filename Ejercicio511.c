#include <stdio.h>
#include <stdbool.h>
int main(){
    int m = 0, lit = 3;
    bool es_multiplo_3;
    printf("Ingrese un numero entero:");
    scanf("%d", &m);

    es_multiplo_3 = (m % lit == 0 && m != 0);

    if(es_multiplo_3){
        printf("m es multiplo de 3\n");
    }else{
        printf("m no es multiplo de 3\n");
    }
    return 0;
}