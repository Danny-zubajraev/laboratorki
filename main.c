#include <math.h>
#include <stdio.h>

double f (long int n)
{
    double sum=0, x, y, h;
    h = M_PI/n;
    for (x=M_PI/2/n; x <= M_PI; x += h)
    {
        if (x > M_PI/2 && x < M_PI)
            y = sqrt(x)*pow(M_E, -(x*x));
        else
            y = pow(2.0, x) - 2 + x*x;
        sum = sum + y;
    }
    sum = sum*h;
    return (sum);
}
int main()
{
    double sum1, sum2 = 0, e;
    long int n=1;

    printf("vvedite tochnost\n");
    scanf("%lf", &e);


    while (1)
    {
        sum1 = f(n);

      if((fabs(sum2-sum1)/3) < e)
          break;
      else
      {
          n *=2;
          sum2 = sum1;
      }

    }
    printf("I1 = %.5lf", sum1);
    return 0;
}