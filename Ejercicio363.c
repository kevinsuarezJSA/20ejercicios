#include <stdio.h>
#include <stdbool.h>

int main() {
    int codigo_producto = 0;
    char nombre_producto[50];
    float precio_unitario = 0;
    int cantidad_stock = 0;
    int stock_minimo = 0;
    float precio_venta = 0;
    float mitad_precio_venta = 0;
    bool requiere_reorden = 0;
    float IVA = 0.15, MARGEN_GANANCIA = 0.30;

    // Datos de entrada
    printf("Ingrese el codigo del producto (entero): ");
    scanf("%d", &codigo_producto);
    printf("Ingrese el nombre del producto (una palabra): ");
    scanf("%s", nombre_producto);
    printf("Ingrese el precio unitario (real): ");
    scanf("%f", &precio_unitario);
    printf("Ingrese la cantidad en stock (entero): ");
    scanf("%d", &cantidad_stock);
    printf("Ingrese el stock minimo permitido (entero): ");
    scanf("%d", &stock_minimo);

    // Proceso y Cálculos
    precio_venta = precio_unitario * (1 + MARGEN_GANANCIA) * (1 + IVA);
    requiere_reorden = (cantidad_stock <= stock_minimo);
    mitad_precio_venta = precio_venta / 2;

    // Salida
    printf("Codigo del Producto: %d\n", codigo_producto);
    printf("Nombre del Producto: %s\n", nombre_producto);
    printf("Precio Unitario Base: %.2f\n", precio_unitario);
    printf("Cantidad en Stock: %d unidades\n", cantidad_stock);
    printf("Stock Minimo: %d unidades\n", stock_minimo);
    printf("PRECIO DE VENTA: %.2f\n", precio_venta);
    printf("Mitad del P.V.P: %.2f\n", mitad_precio_venta);

    if (requiere_reorden) {
        printf("El reabastecimiento requiere reorden inmediato.\n");
    }
    if (!requiere_reorden) {
        printf("No se requiere reorden.\n");
    }
    return 0;
}
