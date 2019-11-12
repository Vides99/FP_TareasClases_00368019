cantidadNumeros = 0
numerosSumatoria = 0
resultado = 0
print("en este programa haremos la suma de la cantidad de numeros que tu quieras")
cantidadNumeros = int(input("Cuantos numeros deseas sumar?"))
for i in range(1,cantidadNumeros + 1):
    numerosSumatoria = int(input("ingresa el valor"))
    resultado = resultado + numerosSumatoria
print("tu sumatoria es: ",resultado)
