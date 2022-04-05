#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double func(double h, long int n) {

    double p = 0, b = M_PI, x = b - h / 2;

    for (n; n != 0; n--) {
        double y = (b / 2 < x && x <= b)
                   ?pow(2.0, x) - 2.0 + x * x
                   :sqrt(x) * pow(b, -x * x);
        p = p + y;
        b -= h;
        x = b - h / 2;
    }
    p *= h;
    return (p);
}

int main() {
    double h, p, e;
    long int n;

    printf("vvedite h\n");
    scanf("%lf", &h);
    printf("vvedite e\n");
    scanf("%lf", &e);


    n = M_PI / h;

    /*while (e != 0)
    {
        p = func(h, n);
        printf ("integral = %lf\n", p);
        p = fabs(func(h, n*2) - p)/3;
        if (p > e)
        {
            n = n * 2;
            h = h / 2;
        }
        else
            e = 0;
    } */
    p=func(h, n);

    printf ("integral = %lf\n", p);
}