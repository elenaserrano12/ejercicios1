def bucle_10():
    print "*******************************"
    print "* EL CONSTRUCTOR DE PIRAMIDES *"
    print "*******************************"
    print "Indica, oh Faraon, de que altura deseas tu piramide. "
    altura=input("altura= ")
    for fil in range(1,altura+1):
        for col in range(1,altura+2-fil):
            print "*",
        print " "

bucle_10()
    
