# Schneider Armin


def eingabe(txt):
    eingabe = int(input("Bitte geben Sie die " + str(txt) + " des Vierecks ein: "))
    return eingabe


def sternQuadrat(l,b):
    i = 0
    while i < l:
        y = 0
        while y < b:
            if (y == 0) or (y == (b-1)) or (i == 0) or (i == (l-1)):
                print("*",end="")
            else:
                print(" ",end="")
            y += 1
        print()
        i += 1
    return


# Hauptprogramm
laenge = eingabe("Länge")
breite = eingabe("Breite")
sternQuadrat(laenge,breite)
