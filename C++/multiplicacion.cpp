//Escriba una función llamada “multiplicación” que reciba como argumento cuatro números reales distintos de cero y que devuelva su producto.
#include<iostream>
int multiplicar (int num1, int num2, int num3, int num4){
int respuesta; 
    respuesta=num1*num2*num3*num4;
    return(respuesta);

}

int main(){
    char salir;
    int num1, num2, num3, num4;
    //leo un numero
    std::cout<<"Introduce un numero:";
    std::cin>>num1;
    //leo otro numero entero
    std::cout<<"Introduce otro numero:";
    std::cin>>num2;
    //leo otro numero entero
    std::cout<<"Introduce otro numero:";
    std::cin>>num3;
    //leo otro numero entero
    std::cout<<"Introduce otro numero:";
    std::cin>>num3;
    //INVOCO A LA FUNCION
    std::cin<<int multiplicar;
    respuesta=num1*num2*num3*num4;
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
     
