#include<iostream>
/*Este programa sirve para saber que numeros son
pares o impare*/
main(){
       int n_maximo=100;
       char salir;
       int i;
       //i es una variable contadora
       for(i=1;i<=n_maximo;i++){
           if(i%2==0){
              std::cout<<i;
              std::cout<<" es PAR";
              }else{
                 std::cout<<i;
                 std::cout<<" es IMPAR";
              }
              std::cout<<"\n";
       }
       std::cout<<"se acabo lo que se daba \n";
       std::cout<<"Toca cualquier tecla para salir: ";
       std::cin>>salir;
       return 0;
}
