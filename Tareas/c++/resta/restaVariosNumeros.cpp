/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int cantidadNumeros;
    int numerosSumatoria = 0;
    int resultado = 0;
    cout<<"En este programa te devolveremos la resta de los numeros que desees"<<endl;
    cout<<"cuantos numeros deseas restar?"<<endl;
    cin>>cantidadNumeros;
    for(int i = 0; i < cantidadNumeros; i++){
        cout<<"ingrese el valor del numero ("<<i + 1<<")"<<endl;
        cin>>numerosSumatoria;
        if(i == 0){
            resultado = numerosSumatoria;
        }else{
            resultado = resultado - numerosSumatoria;
        }
        
    }
    cout<<"tu resta es: "<<resultado;

    return 0;
}
