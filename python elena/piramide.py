def piramide():
    y= int (raw_input ("Dame y: "))
    for i in  range (0,altura, 1):
        for j in range (0,i+1,1):
            print "*",
        print ""

piramide()
