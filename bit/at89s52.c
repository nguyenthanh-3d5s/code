#include <8052.h>
#define k 100
#define MASK(i) (1 << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define GRAY(i) ((i) ^ ((i) >> 1))

void delay_ms(int n) {
    TMOD = 0x01;
    for(int i = 0; i < n; i++) {
        TH0 = 0xFC;
        TL0 = 0x18;
        TF0 = 0;
        TR0 = 1;
        while (TF0 == 0);
        TR0 = 0;
    }
}

void reset_x(int n) {
    if(BIT(n, 0)) {
        P0 = 0xFF;
    }
    if(BIT(n, 1)) {
        P1 = 0x00;
    }
    if(BIT(n, 2)) {
        P2 = 0x00;
    }
    if(BIT(n, 3)) {
        P3 = 0x00;
    }
}

void for_x(int n, int x) {
    for(int i = 0; i < 8; i++) {
        if(BIT(n, 0)) {
            if(x) {
                P0 = ~MASK(i);
            }
            else {
                P0 = ~MASK(7 - i);
            }
        }
        if(BIT(n, 1)) {
            if(x) {
                P1 = MASK(7 - i);
            }
            else {
                P1 = MASK(i);
            }
        }
        if(BIT(n, 2)) {
            if(x) {
                P2 = MASK(7 - i);
            }
            else {
                P2 = MASK(i);
            }
        }
        if(BIT(n, 3)) {
            if(x) {
                P3 = MASK(7 - i);
            }
            else {
                P3 = MASK(i);
            }
        }
        delay_ms(k);
    }
    reset_x(n);
}

void for_y(int n, int x) {
    for(int i = 0; i < 8; i++) {
        if(BIT(n, 0)) {
            if(x) {
                P0 = SET_OFF(P0, i);
            }
            else {
                P0 = SET_ON(P0, i);
            }
        }
        if(BIT(n, 1)) {
            if(x) {
                P1 = SET_ON(P1, 7 - i);
            }
            else {
                P1 = SET_OFF(P1, 7 - i);
            }
        }
        if(BIT(n, 2)) {
            if(x) {
                P2 = SET_ON(P2, 7 - i);
            }
            else {
                P2 = SET_OFF(P2, 7 - i);
            }
        }
        if(BIT(n, 3)) {
            if(x) {
                P3 = SET_ON(P3, 7 - i);
            }
            else {
                P3 = SET_OFF(P3, 7 - i);
            }
        }
        delay_ms(k);
    }
}

void for_z(int n, int m) {
    if(BIT(n, 0)) {
        P0 = SET_OFF(P0, 0);
    }
    if(BIT(n, 1)) {
        P1 = SET_ON(P1, 0);
    }
    if(BIT(n, 2)) {
        P2 = SET_ON(P2, 7);
    }
    if(BIT(n, 3)) {
        P3 = SET_ON(P3, 0);
    }
    delay_ms(k);
    for(int i = 1; i < m; i++) {
        if(BIT(n, 0)) {
            P0 = SET_ON(P0, i - 1);
            P0 = SET_OFF(P0, i);
        }
        if(BIT(n, 1)) {
            P1 = SET_OFF(P1, i - 1);
            P1 = SET_ON(P1, i);
        }
        if(BIT(n, 2)) {
            P2 = SET_OFF(P2, 8 - i);
            P2 = SET_ON(P2, 7 - i);
        }
        if(BIT(n, 3)) {
            P3 = SET_OFF(P3, i - 1);
            P3 = SET_ON(P3, i);
        }
        delay_ms(k);
    }
}

void hieu_ung_01(void) {
    for_y(1, 1);
    for_y(4, 1);
    for_y(8, 1);
    for_y(2, 1);
    for_y(1, 0);
    for_y(4, 0);
    for_y(8, 0);
    for_y(2, 0);
}

void hieu_ung_02(void) {
    for_y(9, 1);
    for_y(6, 1);
    for_y(9, 0);
    for_y(6, 0);
}

void hieu_ung_03(void) {
    for_y(15, 1);
    for_y(15, 0);
}

void hieu_ung_04(void) {
    for_x(1, 1);
    for_x(4, 1);
    for_x(8, 1);
    for_x(2, 1);
}

void hieu_ung_05(void) {
    for_x(9, 1);
    for_x(6, 1);
    for_x(9, 1);
    for_x(6, 1);
}

void hieu_ung_06(void) {
    for_x(15, 1);
    for_x(15, 1);
}

void hieu_ung_07(void) {
    for(int i = 0; i < 8; i++) {
        for_x(1, 1);
        for_z(4, 8 - i);
        for_x(2, 0);
        for_z(8, 8 - i);
    }
    for(int i = 0; i < 8; i++) {
        for_z(1, 8 - i);
        for_z(2, 8 - i);
    }
}

void main(void) {
    while(1) {
        reset_x(15);
        hieu_ung_01();
        hieu_ung_02();
        hieu_ung_03();
        hieu_ung_04();
        hieu_ung_05();
        hieu_ung_06();
        hieu_ung_07();
        delay_ms(k);
    }
}
