def bucle_11():
    #Suma de numeros pares e impares
    nfinal=input("Hasta que numero quieres sumar: ")
    for numero in range(1,nfinal+1):
        #para cada numero me pregunto si es par o impar
        if(numero%2==0):
            print str(numero)," es par"
        else:
            print str(numero), "es impar"

bucle_11()
