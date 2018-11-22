def tabla_de_multiplicar():
    n_tabla=input("Que tabla deseas que te muestre: ?")
    #i es la variable CONTADORA
    for i in range(0,11):
        print str(n_tabla)+" x "+ str(i) +" = "+str(n_tabla*i)


tabla_de_multiplicar()
