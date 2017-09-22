#include <stdio.h>
#include <math.h>
#include "sqrspc.h"
#include "sqrP.h"

double length(int x1, int y1, int x2, int y2) {
    return  sqrt( (x1 - x2) * (x1 - x2) +
                  (y1 - y2) * (y1 - y2) );
}

int main() {

    struct Square_Info{
        int x[4];
        int y[4];
        double l;
        double P, S;
    } square;

    printf("Type coordinates of Square:\n");
    for (int i = 0; i < 4; ++i) {
        printf("x%d y%d: ", i + 1, i + 1);
        scanf("%d%d", &square.x[i], &square.y[i]);
    }

    square.l = length(square.x[0], square.y[0], square.x[1], square.y[1]);

    square.S = space(square.l);
    square.P = perimeter(square.l);

    printf("Square S: %lf\nSquare P: %lf\n", square.S, square.P);
    return 0;
}