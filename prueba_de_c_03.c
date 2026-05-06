// Ejercicio 3: 2 arreglos paralelos — sucursales y ventas de una empresa. 25 sucursales. Presentar promedio de ventas y sucursales sobre el promedio.

#include <stdio.h>   
#include <stdlib.h>  
#include <time.h>    

int main() {
    srand(time(NULL));
    int NUM_SUCURSALES = 25;

    int  sucursales[NUM_SUCURSALES];
    float ventas[NUM_SUCURSALES];
    float suma = 0.0;
    float promedio;

    for (int i = 0; i < NUM_SUCURSALES; i++) {
        sucursales[i] = i + 1;  

        ventas[i] = 10.5f + ((float)rand() / RAND_MAX) * (75.5f - 10.5f);

        suma += ventas[i];
    }

    promedio = suma / NUM_SUCURSALES;

    printf("Promedio de ventas: $%.2f\n\n", promedio);
    printf("Sucursales con ventas mayores al promedio:\n");

    for (int i = 0; i < NUM_SUCURSALES; i++) {
        if (ventas[i] > promedio) {
            printf("  Sucursal %d  ->  $%.2f\n", sucursales[i], ventas[i]);
        }
    }

    return 0;
}
