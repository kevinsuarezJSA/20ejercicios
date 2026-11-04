#include <stdio.h>

int main(){
    float precio = 0, porc_desc = 0, monto_descu = 0;
    float precio_final = 0, multprecio = 0;
    int lit = 100;
    //DATOS DE ENTRADA
    print("Ingrese el precio: ");
    scanf("%f", &precio);
    printf("Ingrese el porcentaje del descuento");
    scanf("%f", &porc_desc);
    //proceso con condicionales
    if(porc_desc >= 0 && porc_desc <= 100){
        monto_descu = (precio * porc_desc)/lit;
        precio_final = precio - monto_descu;
        //salida
        printf("-------------Desglose del proceso de la operación-------------\n");
        printf("Precio original es: %f \n ", precio);
        printf("El porcentaje de descuento es: %f \n", porc_desc);
        printf("El monto de descuento es: %f \n", monto_descu);
        printf("El precio a pagar es: %f \n", precio_final);

        if(precio_final > 0){
            multprecio = precio_final * 3;
            printf("El precio multiplicado por 3 es: %f \n", multprecio);
        }else{
            printf("El precio final es negativo: \n");
        }
    }else{
        printf("El descuento no es valido\n");
    }
    printf("FIN");
    return 0;
}