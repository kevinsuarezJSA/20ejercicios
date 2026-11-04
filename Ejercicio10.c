#include <stdio.h>
#include <math.h>
int main(){
    int n = 0, u = 0;
    int res1 = 0, res2 = 0;
    int res1cub = 0, res2cub = 0;

    printf("Ingrese el primer valor entero");
    scanf("%d", &n);
    printf("Ingrese el segundo valor entero");
    scanf("%d", &u);

    res1 = n % 2;
    res2 = u % 2;

    if(res1 == 0){
        printf("%d es un numero par \n", n);
    }else{
        printf("%d no es un numero par \n", n);
    }
    
    if(res2 == 0){
        printf("%d es un numero par \n", u);
    }else{
        printf("%d no es un numero par \n", u);
    }

    res1cub = pow(res1, 3);
    res2cub = pow(res2, 3);
    printf("El residuo 1 (%d) elevado al cuadrado es: %d \n", res1, res1cub);
    printf("El residuo 2 (%d) elevado al cuadrado es: %d \n", res2, res2cub);
    return 0;
}