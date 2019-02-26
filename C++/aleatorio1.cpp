#include<iostream>
#include<cstdlib>
#include<ctime>
/*Este es el programa genera 5 numeros al azar*/
int main(){
    int lista[5];//Aqui guradamos los numeros
    int i;
    char salir;
    for(i=0;i<5;i++){
        lista[i]=rand();
        std::cout<<lista[i]<<"\n";
    }
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
