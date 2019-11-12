#include <iostream>

using namespace std;

int main()
{
    int cantidadNotas;
    int valorArreglo;
    float sumatoriaNotas;
    float promedioNotas;
    cout<<"Bienvenido al calculador de promedio de notas!"<<endl;
    cout<<"el promedio de cuantas notas quieres conocer?"<<endl;
    cin>>cantidadNotas;
    valorArreglo = cantidadNotas - 1;
    int notas[valorArreglo];
    for(int i = 0; i < cantidadNotas; i++){
        cout<<"ingresa la nota ("<<i + 1<<")"<<endl;
        cin>>notas[i];
        sumatoriaNotas = sumatoriaNotas + notas[i];
    }
    promedioNotas = sumatoriaNotas / cantidadNotas;
    cout<<"tu promedio de "<<cantidadNotas<<" notas, es: "<<promedioNotas;
}