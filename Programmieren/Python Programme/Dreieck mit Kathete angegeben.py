# Schneider Armin


def eingabe():
    eingabe = int(input("Bitte geben Sie die Kathetenlänge des rechtwinkeligen Dreiecks ein: "))
    return eingabe



def sternDreieck(h):
    i = h
    while i > 0:
        y = 0
        while y < i:
            print("* ",end="")
            y += 1
        print()
        i -= 1
    return


# Hauptprogramm
hoehe = eingabe()
sternDreieck(hoehe)
