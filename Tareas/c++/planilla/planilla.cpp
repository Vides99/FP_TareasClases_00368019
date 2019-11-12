#include <iostream>

using namespace std;

int main()
{
    float salarioTrabajador;
    string preguntaHorasExtras;
    int cantidadHorasExtras;
    float valorHoraExtra;
    float gananciaHorasExtra;
    string preguntaPrestamo;
    int cuotaPrestamo;
    float descuentoPension;
    float descuentoSeguroSocial;
    
    cout<<"Hola trabajador salvadoreño! este programa esta hecho para calcular tu sueldo."<<endl;
    cout<<"ingresa tu salario neto sin descuentos"<<endl;
    cin>>salarioTrabajador;
    cout<<"Has tenido horas extras este mes? (Escribe 'si' o 'no')"<<endl;
    cin>>preguntaHorasExtras;
    if(preguntaHorasExtras == "si"){
        cout<<"Cuantas horas extras completaste este mes?"<<endl;
        cin>>cantidadHorasExtras;
        cout<<"Cuanto te pagan por las horas extras?"<<endl;
        cout<<"ingresa la cantidad"<<endl;
        cin>>valorHoraExtra;
        gananciaHorasExtra = cantidadHorasExtras * valorHoraExtra;
    }
    cout<<"Tienes algun prestamo actualmente? (responde 'si' o 'no')"<<endl;
    cin>>preguntaPrestamo;
    if(preguntaPrestamo == "si"){
        cout<<"cual es tu cuota mensual de dicho prestamo? (ingresa la cantidad)"<<endl;
        cin>>cuotaPrestamo;
    }
    descuentoPension = salarioTrabajador * 0.075;
    descuentoSeguroSocial = salarioTrabajador * 0.03;
    salarioTrabajador = salarioTrabajador - descuentoSeguroSocial - descuentoPension - cuotaPrestamo + gananciaHorasExtra;
    cout<<endl<<"Luego de todos tus descuentos y pago de prestamo, te queda un sueldo limpio de: "<<salarioTrabajador;
}