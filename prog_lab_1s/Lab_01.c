#include <stdio.h>

int main() {

    char first[255];
    double second = 0.;

    printf("Type String, Double:\n");
    scanf("%s %lf", first, &second);
    printf("String: %s\nDouble: %lf", first, second);

    return 0;
}