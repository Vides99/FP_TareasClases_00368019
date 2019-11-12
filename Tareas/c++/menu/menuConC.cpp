/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string nombreCliente;
    int horaDeLlegada;
    string decisionCliente;
    string menu;
    int numeroDeCombo;
    double cuenta;
    cout<<"Hola Cliente! brindenos su nombre";
    cout<<"el menu disponible para su horario es el de almuerzo, a continuacion se desplegaran los combos disponibles";
    cout<<"Combo 1: sandwich de pollo -- $1.99";
    cout<<"Combo 2: sandwich de jamon -- $1.50";
    cout<<"Combo 3: sandwich de atun -- $3.00";
    cout<<"Combo 4: sandwich de vegetariano -- $2.50";
    cout<<"Introduzca el numero del combo que desea";
    cin>>numeroDeCombo;
    if(numeroDeCombo == 1){
        cuenta = 1.99;
        cout<<"A seleccionado un combo de pollo, por un precio de $1.99";
        cout<<"si todo esta correcto coloque si, de lo contrario coloque no";
        cin>>decisionCliente;
        if(decisionCliente == "no"){
            cout<<"la orden a sido terminada";
            cout<<"su cuenta es de: $0.0";
            return 0;
        }else{
            cout<<"su combo se a procesado con exito";
            cout<<"¿desea agregar un postre? responda si o no ";
            cin>>decisionCliente;
            if(decisionCliente == "no"){
            cout<<"En la proxima quizas pruebas nuestros deliciosos postres!";
            cout<<"¿desea agregar un antojo? responda si o no ";
            cin>>decisionCliente;
            if(decisionCliente == "no"){
            cout<<"En la proxima quizas pruebas nuestros deliciosos postres!";
            cout<<"Su cuenta a sido procesada con exito, se a hecho un pago de &"<<cuenta;
            }
            else{
                cout<<"Estos son los Antojos disponibles";
                cout<<"Antojos 1: dedos de queso -- $1.99";
                cout<<"Antojos 2: nachos -- $1.50";
                cout<<"Antojos 3: papas fritas con queso -- $3.00";
                cout<<"Antojos 4: platanos fritos -- $2.50";
                cout<<"Introduzca el numero de postre que desea";
                cin>>numeroDeCombo;
                if(numeroDeCombo == 1){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de pollo se le a agregado una orden de dedos de queso";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 2){
                    cuenta = cuenta + 1.50;
                    cout<<"a su combo sandwich de pollo se le a agregado una orden de nachos";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 3){
                    cuenta = cuenta + 3.00;
                    cout<<"a su combo sandwich de pollo se le a agregado una orden de papas fritas";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 4){
                    cuenta = cuenta + 2.50;
                    cout<<"a su combo sandwich de pollo se le a agregado una orden de platans frits";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
            }
            }
            else{
                cout<<"Estos son los postres disponibles";
                cout<<"postre 1: Alfajor -- $1.99";
                cout<<"postre 2: Tres leches -- $1.50";
                cout<<"postre 3: Pastel de fresa -- $3.00";
                cout<<"postre 4: Donas -- $2.50";
                cout<<"Introduzca el numero de postre que desea";
                cin>>numeroDeCombo;
                if(numeroDeCombo == 1){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de pollo se le a agregado un Alfajor";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 2){
                    cuenta = cuenta + 1.50;
                    cout<<"a su combo sandwich de pollo se le a agregado un Tres leches";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 3){
                    cuenta = cuenta + 3.00;
                    cout<<"a su combo sandwich de pollo se le a agregado un Pastel de fresa";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 4){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de pollo se le a agregado unas Donas";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de pollo se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
            }
        }
    }
    else if(numeroDeCombo == 2){
        cuenta = 1.50;
        cout<<"A seleccionado un combo de sandwich de jamon, por un precio de $1.50";
        cout<<"si todo esta correcto coloque si, de lo contrario coloque no";
        cin>>decisionCliente;
        if(decisionCliente == "no"){
            cout<<"la orden a sido terminada";
            cout<<"su cuenta es de: $0.0";
            return 0;
        }else{
            cout<<"su combo se a procesado con exito";
            cout<<"¿desea agregar un postre? responda si o no ";
            cin>>decisionCliente;
            if(decisionCliente == "no"){
            cout<<"En la proxima quizas pruebas nuestros deliciosos postres!";
            cout<<"¿desea agregar un antojo? responda si o no ";
            cin>>decisionCliente;
            if(decisionCliente == "no"){
            cout<<"En la proxima quizas pruebas nuestros deliciosos postres!";
            cout<<"Su cuenta a sido procesada con exito, se a hecho un pago de &"<<cuenta;
            }
            else{
                cout<<"Estos son los Antojos disponibles";
                cout<<"Antojos 1: dedos de queso -- $1.99";
                cout<<"Antojos 2: nachos -- $1.50";
                cout<<"Antojos 3: papas fritas con queso -- $3.00";
                cout<<"Antojos 4: platanos fritos -- $2.50";
                cout<<"Introduzca el numero de postre que desea";
                cin>>numeroDeCombo;
                if(numeroDeCombo == 1){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 2){
                    cuenta = cuenta + 1.50;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 3){
                    cuenta = cuenta + 3.00;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 4){
                    cuenta = cuenta + 2.50;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
            }
            }
            else{
                cout<<"Estos son los postres disponibles";
                cout<<"postre 1: Alfajor -- $1.99";
                cout<<"postre 2: Tres leches -- $1.50";
                cout<<"postre 3: Pastel de fresa -- $3.00";
                cout<<"postre 4: Donas -- $2.50";
                cout<<"Introduzca el numero de postre que desea";
                cin>>numeroDeCombo;
                if(numeroDeCombo == 1){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de jamon se le a agregado un Alfajor";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 2){
                    cuenta = cuenta + 1.50;
                    cout<<"a su combo sandwich de jamon se le a agregado un Tres leches";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 3){
                    cuenta = cuenta + 3.00;
                    cout<<"a su combo sandwich de jamon se le a agregado un Pastel de fresa";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 4){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de jamon se le a agregado unas Donas";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
            }
        }
    }
    else if(numeroDeCombo == 2){
        cuenta = 1.50;
        cout<<"A seleccionado un combo de sandwich de jamon, por un precio de $1.50";
        cout<<"si todo esta correcto coloque si, de lo contrario coloque no";
        cin>>decisionCliente;
        if(decisionCliente == "no"){
            cout<<"la orden a sido terminada";
            cout<<"su cuenta es de: $0.0";
            return 0;
        }else{
            cout<<"su combo se a procesado con exito";
            cout<<"¿desea agregar un postre? responda si o no ";
            cin>>decisionCliente;
            if(decisionCliente == "no"){
            cout<<"En la proxima quizas pruebas nuestros deliciosos postres!";
            cout<<"¿desea agregar un antojo? responda si o no ";
            cin>>decisionCliente;
            if(decisionCliente == "no"){
            cout<<"En la proxima quizas pruebas nuestros deliciosos postres!";
            cout<<"Su cuenta a sido procesada con exito, se a hecho un pago de &"<<cuenta;
            }
            else{
                cout<<"Estos son los Antojos disponibles";
                cout<<"Antojos 1: dedos de queso -- $1.99";
                cout<<"Antojos 2: nachos -- $1.50";
                cout<<"Antojos 3: papas fritas con queso -- $3.00";
                cout<<"Antojos 4: platanos fritos -- $2.50";
                cout<<"Introduzca el numero de postre que desea";
                cin>>numeroDeCombo;
                if(numeroDeCombo == 1){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 2){
                    cuenta = cuenta + 1.50;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 3){
                    cuenta = cuenta + 3.00;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
                else if(numeroDeCombo == 4){
                    cuenta = cuenta + 2.50;
                    cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                    cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                }
            }
            }
            else{
                cout<<"Estos son los postres disponibles";
                cout<<"postre 1: Alfajor -- $1.99";
                cout<<"postre 2: Tres leches -- $1.50";
                cout<<"postre 3: Pastel de fresa -- $3.00";
                cout<<"postre 4: Donas -- $2.50";
                cout<<"Introduzca el numero de postre que desea";
                cin>>numeroDeCombo;
                if(numeroDeCombo == 1){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de jamon se le a agregado un Alfajor";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 2){
                    cuenta = cuenta + 1.50;
                    cout<<"a su combo sandwich de jamon se le a agregado un Tres leches";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 3){
                    cuenta = cuenta + 3.00;
                    cout<<"a su combo sandwich de jamon se le a agregado un Pastel de fresa";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
                else if(numeroDeCombo == 4){
                    cuenta = cuenta + 1.99;
                    cout<<"a su combo sandwich de jamon se le a agregado unas Donas";
                    cout<<"su cuenta es: "<<cuenta;
                    cout<<"¿desea agregar un antojo? responda si o no ";
                    cin>>decisionCliente;
                    if(decisionCliente == "no"){
                        cout<<"Quizas en otra ocasion disfrutes de nuesros deliciosos antojos";
                        cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                    }else{
                        cout<<"Estos son los Antojos disponibles";
                        cout<<"Antojos 1: dedos de queso -- $1.99";
                        cout<<"Antojos 2: nachos -- $1.50";
                        cout<<"Antojos 3: papas fritas con queso -- $3.00";
                        cout<<"Antojos 4: platanos fritos -- $2.50";
                        cout<<"Introduzca el numero de postre que desea";
                        cin>>numeroDeCombo;
                        if(numeroDeCombo == 1){
                            cuenta = cuenta + 1.99;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de dedos de queso";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 2){
                            cuenta = cuenta + 1.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de nachos";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 3){
                            cuenta = cuenta + 3.00;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de papas fritas";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                        else if(numeroDeCombo == 4){
                            cuenta = cuenta + 2.50;
                            cout<<"a su combo sandwich de jamon se le a agregado una orden de platans frits";
                            cout<<"su orden a sido procesada con exito, se a cargado a su cuenta un monto de $"<<cuenta;
                        }
                    }
                }
            }
        }
    }

    return 0;
}