int main()
{
    int numCaso;
    numCaso = 1;
    cout<<"Facebook falla en 5 casos";
    cout<<"Para conocer los casos, digite el numero de caso que quiera conocer, para terminar el programa ingrese 0";
    while(numCaso == 0 || numCaso == 1 || numCaso == 2 || numCaso == 3 || numCaso == 4 || numCaso == 5){
        cin>>numCaso;
        switch(numCaso){
            case (1 || 2 ||3):
            cout<<"El caso 3, es error de credenciales";
            break;
            case 4:
            cout<<"El caso 4, su conexion no es la adecuada";
            break;
            case 5:
            cout<<"El caso 5, su cuenta no existe";
            break;
            default:
            cout<<"Has finalizado el programa!";
            break;
        }
    }
}