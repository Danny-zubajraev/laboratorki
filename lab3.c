#include <stdio.h>
#include <math.h>

int main() {
    long int s;
    double h, x, f;

    printf("vvedite H\n");
    scanf("%lf", &h);

    s = 3.0 / h;
    x = 0;

    printf("s = %d\n", s);
    printf("x        f(x)\n__________\n");

    for (s; s != 0; s--) {
        if (0 <= x && x <= 1.5) {
            f = pow(2.0, x) - 2.0 + x * x;
            printf("%.1lf     %.1lf\n", x, f);
        } else {
            f = sqrt(x) * pow(M_E, -x * x);
            printf("%.1lf     %.1lf\n", x, f);
        }
        x += h;
    }
    return 0;
}
