import os

def menu():
    """
    Función que limpia la pantalla y muestra nuevamente el menu
    """
    os.system('clear') # NOTA para windows tienes que cambiar clear por cls
    print("Cartelera de cine")
    print("Selecciona un rango de horario")
    print("\t1 - mañana ")
    print("\t2 - tarde")
    print("\t3 - noche")
    print("\t9 - salir")
    
def peliculaMañana():
    """ para presentar peliculas """
    print("Las peliculas de la mañana de hoy son:" )
    print("\t1 - Wason 8:00 AM - 9:00 AM")
    print("\t2 - IT 9:00 AM - 10:00 AM")
    print("\t3 - Transformers 10:00 AM - 11:00 AM")
    print("\t9 - Cars 11:00 AM - 12:00 PM")
    
def peliculaTarde():
    """ para presentar peliculas """
    print("Las peliculas de la mañana de hoy son:" )
    print("\t1 - Wason 1:00 PM - 2:00 PM")
    print("\t2 - IT 2:00 PM - 3:00 PM")
    print("\t3 - Transformers 3:00 PM - 4:00 PM")
    print("\t9 - Cars 4:00 PM - 5:00 PM")
    comida()
    
def peliculaNoche():
    """ para presentar peliculas """
    print("Las peliculas de la mañana de hoy son:" )
    print("\t1 - Wason 6:00 PM - 7:00 PM")
    print("\t2 - IT 7:00 PM - 8:00 PM")
    print("\t3 - Transformers 8:00 PM - 9:00 PM")
    print("\t9 - Cars 9:00 PM - 10:00 PM")
    comida()

def comida():
    """ funcion para comidas"""
    print("¿Quiere agregar un como de nachos por un precio de $4.50?")
    

menu()
eleccionHorarioCine = input("Inserte la opcion")

if eleccionHorarioCine == "1":
    os.system('clear')
    peliculaMañana()
    print("Selecciona una pelicula, si quiere cancelar la preventa presione 9")
    eleccion = input("ingrese la opcion")
    if eleccion == "1":
        print("has elegido el Wason, en el horario de las 8:00 AM")
        print("¡deseas agregar un combo por $4.5? de ser asi escribe si, de lo contraio escribe no y tu transaccion sera completada")
        comidaeleccion = input("Ingrese valor de comida")
        if comidaeleccion == "si":
          os.system('clear')
          print("has reservado correctamente tu entrada para el Wason (8:00AM - 9:00AM) con un combo de palomitas!")
        else:
          os.system('clear')
          print("has reservado correctamente tu entrada para el Wason (8:00AM - 9:00AM)")
    elif eleccion == "2":
        print("has elegido el IT, en el horario de las 9:00 AM")
        print("¡deseas agregar un combo por $4.5? de ser asi escribe si, de lo contraio escribe no y tu transaccion sera completada")
        comidaeleccion = input("Ingrese valor de comida")
        if comidaeleccion == "si":
          os.system('clear')
          print("has reservado correctamente tu entrada para el IT (9:00AM - 10:00AM) con un combo de palomitas!")
        else:
          os.system('clear')
          print("has reservado correctamente tu entrada para el IT (9:00AM - 10:00AM)")
    elif eleccion == "3":
        print("has elegido el Transformers, en el horario de las 10:00 AM")
        print("¡deseas agregar un combo por $4.5? de ser asi escribe si, de lo contraio escribe no y tu transaccion sera completada")
        comidaeleccion = input("Ingrese valor de comida")
        if comidaeleccion == "si":
          os.system('clear')
          print("has reservado correctamente tu entrada para el Transformers (10:00AM - 11:00AM) con un combo de palomitas!")
        else:
          os.system('clear')
          print("has reservado correctamente tu entrada para el Transformers (10:00AM - 11:00AM)")
    elif eleccion == "4":
        print("has elegido el Cars, en el horario de las 11:00 AM")
        print("¡deseas agregar un combo por $4.5? de ser asi escribe si, de lo contraio escribe no y tu transaccion sera completada")
        comidaeleccion = input("Ingrese valor de comida")
        if comidaeleccion == "si":
          os.system('clear')
          print("has reservado correctamente tu entrada para el Cars (11:00AM - 12:00PM) con un combo de palomitas!")
        else:
          os.system('clear')
          print("has reservado correctamente tu entrada para el Cars (11:00AM - 12:00PM)")
    elif eleccion == "9":
        os.system('clear')
        print("transaccion cancelada")