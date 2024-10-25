#include <Arduino.h>

void morsenPunkt(int port) {
    digitalWrite(port, HIGH);
    delay(500);
    digitalWrite(port, LOW);
    delay(250);
}

void morsenStrich(int port) {
    digitalWrite(port, HIGH);
    delay(1500);
    digitalWrite(port, LOW);
    delay(250);
}

void morsenCharacterA(int port) {
    morsenPunkt(port);
    morsenStrich(port);
}

void morsenCharacterB(int port) {
    morsenStrich(port);
    morsenPunkt(port);
    morsenPunkt(port);
    morsenPunkt(port);
}

void morsenCharacterC(int port) {
    morsenStrich(port);
    morsenPunkt(port);
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterD(int port) {
    morsenStrich(port);
    morsenPunkt(port);
    morsenPunkt(port);
}

void morsenCharacterE(int port) {
    morsenPunkt(port);
}

void morsenCharacterF(int port) {
    morsenPunkt(port);
    morsenPunkt(port);
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterG(int port) {
    morsenStrich(port);
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterH(int port) {
    for (int i = 0; i < 4; i++) {
        morsenPunkt(port);
    }
}

void morsenCharacterI(int port) {
    for (int i = 0; i < 2; i++) {
        morsenPunkt(port);
    }
}

void morsenCharacterJ(int port) {
    morsenPunkt(port);
    morsenStrich(port);
    morsenStrich(port);
    morsenStrich(port);
}

void morsenCharacterK(int port) {
    morsenStrich(port);
    morsenPunkt(port);
    morsenStrich(port);
}

void morsenCharacterL(int port) {
    morsenPunkt(port);
    morsenStrich(port);
    morsenPunkt(port);
    morsenPunkt(port);
}

void morsenCharacterM(int port) {
    morsenStrich(port);
    morsenStrich(port);
}

void morsenCharacterN(int port) {
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterO(int port) {
    for (int i = 0; i < 3; i++) {
        morsenStrich(port);
    }
}

void morsenCharacterP(int port) {
    morsenPunkt(port);
    morsenStrich(port);
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterQ(int port) {
    morsenStrich(port);
    morsenStrich(port);
    morsenPunkt(port);
    morsenStrich(port);
}

void morsenCharacterR(int port) {
    morsenPunkt(port);
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterR(int port) {
    morsenPunkt(port);
    morsenStrich(port);
    morsenPunkt(port);
}

void morsenCharacterS(int port) {
    for (int i = 0; i < 3; i++) {
        morsenPunkt(port);
    }
}

void morsenCharacterT(int port) {
    morsenStrich(port);
}

void morsenCharacterT(int port) {
    morsenPunkt(port);
    morsenPunkt(port);
    morsenStrich(port);
}

void morsenCharacterV(int port) {
    morsenPunkt(port);
    morsenPunkt(port);
    morsenPunkt(port);
    morsenStrich(port);
}

void morsenCharacterW(int port) {
    morsenPunkt(port);
    morsenStrich(port);
    morsenStrich(port);
}

void morsenCharacterX(int port) {
    morsenStrich(port);
    morsenPunkt(port);
    morsenPunkt(port);
    morsenStrich(port);
}

void morsenCharacterY(int port) {
    morsenStrich(port);
    morsenPunkt(port);
    morsenStrich(port);
    morsenStrich(port);
}

void morsenCharacterZ(int port) {
    morsenStrich(port);
    morsenStrich(port);
    morsenPunkt(port);
    morsenPunkt(port);
}