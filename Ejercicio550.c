#include <stdio.h>
int main(){
    float hPa = 0, fact = 0.750062, mmHg = 0, mitad = 0;
    char nombre[50];
    
    printf("--------------Bienvenido estimado usuario--------------\n");
    printf("Por favor ingrese su primer nombre:");
    scanf("%s", nombre);
    printf("Estimada/o %s por favor ingrese el valor de la presion en hectopascales: ", nombre);
    scanf("%f", &hPa);

    mmHg = hPa * fact;
    mitad = mmHg / 2;
    if(mmHg > 0){
        printf("%s, mmHg es un numero positivo \n", nombre);
    }else{
        printf("%s, mmHg es un numero negativo \n", nombre);
    }

    printf("%f hPa es %f en mmHg\n", hPa, mmHg);
    printf("La mitad de mmHg es: %f \n", mitad);

    return 0;
}
