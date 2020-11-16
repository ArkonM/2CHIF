/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 17/11/2017
    description: Dieses Programm bewirkt, dass der Roboter gerade ausfährt
 linker Motor: B, Rechter Motor: C , Ultraschall Sensor: 1
                                                                            */
#include "Header.h"
sub nachVorneFahren(){
    while(SensorUS(IN_1) >= 10){                //Er fährt solange der Abstand größer als 10cm ist
        OnFwdReg(OUT_BC, 50, OUT_REGMODE_SYNC); //
    }Off(OUT_BC);
}
