def bucle_13():
    print "************************"
    print "* SUMA PARES O IMPARES *"
    print "************************"
    print "hasta que numero deseas sumar: "
    nfinal=input("numero= ")
    #definimos una variable para contar los pares (ACUMULADORA)
    suma_pares=0 #inicializamos la variable a cero
    #definimos una variable para contar los impares
    suma_impares=0 #inicializamos la variable a cero
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero)," es PAR"
            suma_pares=suma_pares+numero
        else:
            print str(numero)," es IMPAR"
            suma_impares=suma_impares+numero
    print "la suma de los numero pares vale",suma_pares
    print "la suma de los numero impares vale",suma_impares

bucle_13()
        
