#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill (int n, int a[])
{
    int i;
    for (i=0; i<n; i++)
        a[i] = rand() % 4 + 2;
}

void sp (int a[], int n)
{
    int i, j, b[n];
    for (i=0; i<n; i++)
    {
        
        for (j=i+1; j<n; j++)
        {
            if (a[i] == a[j])
            {
                b[i] = a[i] + a[j];
                b[j] = a[i] * a[j];
                break;
            }
        }
    }
    for (i=0; i<n; i++)
        printf("%4d ", b[i]);
}
int main() {
    srand(time(NULL));
    int n, i;
    printf("vvedite n\nn = ");
    scanf ("%d", &n);
    int a[n];
    fill(n, a);
    for (i=0; i<n; i++)
        printf("%4d ", a[i]);
    printf("\n");
    sp(a, n);
    return 0;
}
