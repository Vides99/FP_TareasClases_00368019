

#include <iostream>

using namespace std;

int main()
{
    int numAfactorial;
    int resultado = 1;
    cout<<"Te devolveremos el factorial de un numero!"<<endl;
    cout<<"ingresa el numero del cual quieres el factorial"<<endl;
    cin>>numAfactorial;
    for(int i = 1; i <= numAfactorial; i++){
        resultado = i*resultado;
    }
    cout<<"el factorial de "<<numAfactorial<<" es:"<<resultado;
    
    return 0;
}
