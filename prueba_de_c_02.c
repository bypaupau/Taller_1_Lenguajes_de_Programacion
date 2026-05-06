// Ejercicio 2: Generar 500 valores aleatorios entre 50 y 100. Presentar cuántos valores pares y cuántos impares fueron generados.

#include <stdio.h>   
#include <stdlib.h>  
#include <time.h>    // time() — para semilla del generador aleatorio

int main() {
    srand(time(NULL));

    int par = 0;
    int impar = 0;
    int num;

    for (int i = 0; i < 500; i++) {
        num = (rand() % 51) + 50;

        if (num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("Numeros pares generados:   %d\n", par);
    printf("Numeros impares generados: %d\n", impar);
    printf("Total verificado:          %d\n", par + impar);

    return 0;
}
