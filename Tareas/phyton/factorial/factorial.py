numFactorial = 0;
resultado = 1;
print("En este programa te daremos el factorial de un numero")
numFactorial = int(input("introduce el numero del cual quieras conocer el factorial"))
for i in range(1,numFactorial + 1):
    resultado = resultado * i
    
print("el factorial de ", numFactorial, " es: ", resultado)