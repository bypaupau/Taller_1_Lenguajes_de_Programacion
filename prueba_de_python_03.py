# Genere 2 arreglos paralelos que representen las sucursales de una empresa y sus ventas. Existen 25 sucursales en la empresa. Presente el promedio de ventas, así como las sucursales con ventas mayores al promedio. 

import random 
sucursales = [i for i in range(1,26)]
sucursales_ventas = [random.uniform(10.5, 75.5) for _ in range(len(sucursales))]

promedio = sum(sucursales_ventas) / len(sucursales)

print(f"Promedio de ventas: ${promedio}\n")

print("Sucursales con ventas mayor al promedio")
for n in range(len(sucursales)):
    if sucursales_ventas[n] > promedio:
        print(f"Sucursal {n} con ventas: ${sucursales_ventas[n]}")