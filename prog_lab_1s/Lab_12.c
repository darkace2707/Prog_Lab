#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {

    if (argc > 0) {
        printf("There can be only one input file.");
        return 1;
    }
    FILE *input;
    input = fopen(argv[1], "r");
    char chr;
    int k = 1;
    while (chr = fgetc(input) != EOF) {
        if (k % 2 == 0) {
            if (chr != '\n') {
                printf("%c", chr);
            } else {
                printf("\n");
                ++k;
            }
        }
    }

    fclose(input);
    return 0;
}