#include <stdio.h>

//рекурсивная функция
unsigned int stR(unsigned int n, unsigned int a)
{
    if (n==0) return (1);
    a = stR(n-1, a) * a;
    return a;
}

unsigned int stC(unsigned int n, unsigned int a)
{
    unsigned int i, p = 1;
    for (i=0; i<n; i++)
        p *= a;
    return p;

}

int main()
{
    unsigned int n, a;
    printf("write the number and ^ \nnumber -> ");
    scanf("%u", &a);
    printf("^ -> ");
    scanf("%u", &n);
    printf("rec %u^%u = %u\n", a, n, stR(n, a));
    printf("cycle %u^%u = %u\n", a, n, stC(n, a));
}
