# Schneider Armin


def eingabe():
    eingabe = int(input("Bitte geben Sie die Höhe ihrer Pyramide ein: "))
    return eingabe



def sternPyramide(h):
    i = 0
    while i < h:
        y = 0
        s1 = h - i
        s2 = h + i
        while y < s2:
            if y == (s1-1) or y == (s2-1):
                print("*",end="")
            else:
                print(" ",end="")
            y += 1
        print()
        i += 1
    return



# Hauptprogramm
hoehe = eingabe()
sternPyramide(hoehe)
