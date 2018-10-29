def cambio():
    euros=input("Introduce una cantidad: ")
    respuesta=raw_input("dolares o libras (d/l)?: ")
    if(respuesta=="d"):
        moneda_nueva=euros*1.15
        unidades="dolares"
    else:
        moneda_nueva=euros*0.88
        unidades="libras"
    print "Son "+ moneda_nueva+" "+ unidades

cambio()
