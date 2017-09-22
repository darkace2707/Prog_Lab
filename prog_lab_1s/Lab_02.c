#include <stdio.h>
#include <math.h>

int main() {

    int a;
    float pi = 3.14, z1, z2;

    printf("Type a:\n");
    scanf("%d", &a);

    if( (1 + cos(4*a) == 0) || (1 + cos(2*a) == 0) || (sin(3 * pi / 2 - a) == 0) ) printf("Error");

    z1 = ( sin(4*a) / (1 + cos(4*a)) ) * ( cos(2*a) / (1 + cos(2*a)) );

    z2 = cos(3 * pi / 2 - a) / sin(3 * pi / 2 - a);

    printf("Z1: %f\nZ2: %f", z1, z2);
}