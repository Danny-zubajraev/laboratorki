#include <stdio.h>
#include <math.h>

int main() {

    float a, b, x;
    printf("Vvedite a, b, x\n");

    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("x=");
    scanf("%f", &x);
    if (a + b < x) {
        if (x == 0) {
            printf("znamenatel = 0\n");
        } else {
            x = (a + b) / x;
            printf("rezultat = %.3f\n", x);
        }
        printf("a+b menshe x\n");
    } else if (a + b > x) {
        if (a + b == 0) {
            printf("znamenatel = 0\n");
        } else {
            x = x / (a + b);
            printf("rezultat = %.3f\n", x);
        }
        printf("a+b bolshe x\n");
    } else {
        if (x == 0) {
            printf("znamenatel = 0\n");
        } else {
            x = b / x;
            printf("rezultat = %.3f\n", x);
        }
        printf("a+b = x\n");
    }


    return 0;
}
