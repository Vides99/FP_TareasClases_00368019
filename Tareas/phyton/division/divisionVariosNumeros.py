cantidadNumeros = 0
numerosSumatoria = 0
resultado = 1
print("en este programa haremos la division de la cantidad de numeros que tu quieras")
cantidadNumeros = int(input("Cuantos numeros deseas dividir?"))
for i in range(1,cantidadNumeros + 1):
    numerosSumatoria = int(input("ingresa el valor"))
    if(i == 1):
        resultado = numerosSumatoria
    else:
        resultado = resultado / numerosSumatoria
print("tu division es: ",resultado)
