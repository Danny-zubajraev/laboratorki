#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pok(int n, int a[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d ", a[i][j]);
        printf("\n");
    }
}

void fill(int n, int a[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            a[i][j] = rand() % 11 + 0;
    }
}

void tran(int n, int a[n][n], int b[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            b[i][j] = a[j][i];
    }
}

void pr(int n, int a[n][n], int b[n][n], int c[n][n]) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += b[i][k] * a[k][j];
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int n;
    printf("vvedite razmernost n\nn = ");
    scanf("%d", &n);
    printf("\n");
    int a[n][n];
    int b[n][n];
    int c[n][n];
    fill(n, a);
    pok(n, a);
    printf("\n tr matrica = \n");
    tran(n, a, b);
    pok(n, b);
    pr(n, a, b, c);
    printf("\nproizv = \n");
    pok(n, c);
}