#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

int main (){
    int salir;
    //Definimos el vector de PUNTEROS
    int nletras;
    int cont;
    char palabra[30];
    char *lista[3];//3 posiciones de memoria que apntan a 3 palabras
    //Procedimiento
    for(cont=0;cont<3;cont++){
        //1. Leo una palabra.
        std::cout<<"Palabra: ";
        std::cin>>palabra;
        //2. Averiguo cuántas letras tiene.
        nletras=strlen(palabra);
        //3. Reservo memoria para guardar la palabra.
        lista[cont]=(char *) malloc(nletras*sizeof(char));
        //4. Escribo la palabra en la memoria reservada.
        strcpy(lista[cont],palabra);//copia palabra en lista [0] 
        //5. Volvemos al punto 1.
    }
    //Mostrar las palabras 
    for(cont=0;cont<3;cont++){
         std::cout<<lista[cont];
         std::cout<<"\n ";                   
                              
    }
    
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
    
    
