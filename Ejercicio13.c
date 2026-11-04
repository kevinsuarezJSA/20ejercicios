#include <stdio.h>
#include <math.h>

int main(){
    float kmh = 0, factor = 0.27778, ms = 0, val_abs = 0;

    printf("Ingrese la velocidad en km/h: ");
    scanf("%f", &kmh);

    ms = kmh * factor;
    val_abs = fabs(kmh-ms);

    if(ms > 0){
        printf("La velocidad es positiva \n");
    }else{
        printf("La velocidad es negativa \n");
    }
    printf("%.2f km/h equivalen a %.2f m/s. \n", kmh, ms);
    printf("El valor absoluto de la diferencia entre ambos resultados es: %f \n", val_abs);
    printf("Operacion realizada con exito y finalizada");
}