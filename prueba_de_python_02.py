# Generar 500 valores aleatorios entre 50 y 100. Presente cuantos valores pares y cuántos impares fueron generados
import random
lista_aleatorio = random.choices(range(50,100),k=500)
par = impar = 0

for num in lista_aleatorio:
    if num % 2 == 0:
        par += 1
    else:
        impar += 1

print("Numeros pares de la lista de valores aleatorios:", par)
print("Numeros impares de la lista de valores aleatorios:", impar)