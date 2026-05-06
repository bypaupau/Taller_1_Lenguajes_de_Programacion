// Ingresar 10 valores por teclado. Presentar la suma y promedio
#include <stdio.h>
#include <time.h>

int main(){
    int valor;
    int suma = 0;
    float promedio;


   for(int i = 0; i < 10; i ++){
    printf("Ingresar el valor %d: ", i + 1);
    scanf("%d", &valor);
    suma = suma + valor;
   }

    promedio = (float)suma / 10;
    printf("\n La suma total es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}