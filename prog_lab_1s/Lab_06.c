#include <stdio.h>
#include <malloc.h>

int main() {
    double a[4] = {56.4, 36.5, 7.7, 44.3},
            *p = a;

    for(int i = 0; i < 4; ++i) {
        printf("a[%d] = %f ", i, *(p + i));
    }

    printf("\n");

    double *b;
    b = (double *)malloc(4 * sizeof(double));
    b[0] = 56.4;
    b[1] = 36.5;
    b[2] = 7.7;
    b[3] = 44.3;

    for(int i = 0; i < 4; ++i) {
        printf("a[%d] = %f ", i, b[i]);
    }
}