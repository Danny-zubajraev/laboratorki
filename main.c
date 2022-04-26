#include <math.h>
#include <stdio.h>

double f (double hh, long int nn)
{
    double y=0, x=0, sum=0;
    x = M_PI - hh/2;
    for (nn; nn!=0; nn--)
    {
        if (x > M_PI/2 && x < M_PI)
            y = sqrt(x)*pow(M_E, -(x*x));
        else
            y = pow(2.0, x) - 2 + x*x;
        x = x-hh;
        sum = sum + y;
    }
    sum = sum*hh;
    return (sum);
}
int main()
{
    double h, sum;
    long int n;

    printf("vvedite shag\n");
    scanf("%lf", &h);
    n = M_PI / h;
    sum = f(h, n);
    printf("sum = %lf", sum);
    return 0;
}