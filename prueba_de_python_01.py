# Ingresar 10 valores por teclado. Presentar la suma y promedio

suma = 0
promedio: float

for i in range(10):
    suma += int(input(f"{i + 1}. Ingrese un número: "))

promedio = suma / 10

print("La suma de los valores ingresados es:", suma)
print("El promedio total es:", promedio)