# Schneider Armin


def eingabe():
    eingabe = int(input("Bitte geben Sie die Höhe des rechtwinkeligen Dreiecks ein: "))
    return eingabe



def sternDreieck(h):
    i = 1
    while i <= h:
        y = 0
        while y < i:
            if (i % 2) == 0:
                print("*",end="")
            else:
                print("o",end="")
            y += 1
        print()
        i += 1
    i -= 2
    while i > 0:
        y = 0
        while y < i:
            if (i % 2) == 0:
                print("*",end="")
            else:
                print("o",end="")
            y += 1
        print()
        i -= 1
    return


# Hauptprogramm
hoehe = eingabe()
sternDreieck(hoehe)
