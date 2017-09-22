#include <stdio.h>
#include <math.h>

struct coordinates {
    int x;
    int y;
} a[100];
int n, dgt[100];
double mtrx[100][99];

int coor(int n){

    for (int i = 0; i < n; ++i) {
        int k = 0;
        for (int j = 0; j < n; ++j) {
            if ( i != j ) {
                int tmp1, tmp2;
                tmp1 = (a[i].x - a[j].x) * (a[i].x - a[j].x);
                tmp2 = (a[i].y - a[j].y) * (a[i].y - a[j].y);
                mtrx[i][k] = sqrt(tmp1 + tmp2);
                k++;
            }
        }
    }
}

int mssv(int n) {

    int i = 0;
    while (n > 9) {
        dgt[i] = n % 10;
        n = n / 10;
        i++;
    }
    dgt[i] = n;
    ++i;
    for (int k = 0; k < i/2; ++k) {
        int tmp;
        tmp = dgt[k];
        dgt[k] = dgt[i-k-1];
        dgt[i-k-1] = tmp;
    }
    for (int k = 0; k < i; ++k) {
        printf("%d ", dgt[k]);
    }
}

int main() {

    printf("Type amount of dots: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Type coordinates of dot #%d: ", i+1);
        scanf("%d%d", &a[i].x, &a[i].y);
    }

    coor(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            printf("%lf ", mtrx[i][j]);
        }
        printf("\n");
    }

printf("\n");/////////////////////////////////////////

    printf("Type a number: ");
    scanf("%d", &n);

    mssv(n);

    return 0;
}