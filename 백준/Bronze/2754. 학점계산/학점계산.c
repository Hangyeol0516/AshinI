#include <stdio.h>

int main() {

    char x, y;
    scanf("%c%c", &x, &y);

    if (x == 'A') {
        if (y == '+') {
            printf("4.3");
        }
        if (y == '0') {
            printf("4.0");
        }
        if (y == '-') {
            printf("3.7");
        }
    };

    if (x == 'B') {
        if (y == '+') {
            printf("3.3");
        }
        if (y == '0') {
            printf("3.0");
        }
        if (y == '-') {
            printf("2.7");
        }
    };

    if (x == 'C') {
        if (y == '+') {
            printf("2.3");
        }
        if (y == '0') {
            printf("2.0");
        }
        if (y == '-') {
            printf("1.7");
        }

    };

    if (x == 'D') {
        if (y == '+') {
            printf("1.3");
        }
        if (y == '0') {
            printf("1.0");
        }
        if (y == '-') {
            printf("0.7");
        }
    };

    if (x == 'F') printf("0.0");
    
    return 0;
}