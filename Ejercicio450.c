#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int n = 0, lit = 5;
    bool es_multiplo_5;
    float angulo_radianes, res_cos;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    es_multiplo_5 = (n % lit == 0 && n != 0);

    if(es_multiplo_5){
        printf("n es multiplo de 5\n");
    }else{
        printf("n no es multiplo de 5\n");
    }
    angulo_radianes = (double)n;
    res_cos = cos(angulo_radianes);
    printf("El coseno del angulo %d es: %.4f", n, res_cos);
}