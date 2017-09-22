#include <stdio.h>
#define _GNU_SOURCE
#include <string.h>

int main() {

    char str1[255], str2[255];

    printf("Type First string: ");
    scanf("%s", str1);

    printf("Type Second string: ");
    scanf("%s", str2);

    strncat(str1, str2, strlen(str2));
    printf("First string + Second string: %s\n", str1);

/////////////////////////////////////////////////////

    printf("Type First string: ");
    scanf("%s", str1);

    printf("Type Second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are same.\n");
    } else {
        printf("Strings are not same.\n");
    }

/////////////////////////////////////////////////////

    printf("Type string: ");
    scanf("%s", str1);

    strcpy(str2, str1);

    printf("Copied string: %s\n", str2);

/////////////////////////////////////////////////////

    printf("Type string: ");
    scanf("%s", str1);

    int str1_size;
    str1_size = strlen(str1);

    printf("Size of string: %d\n", str1_size);

/////////////////////////////////////////////////////

    printf("Type First string: ");
    scanf("%s", str1);

    printf("Type Second string: ");
    scanf("%s", str2);

    char *len;
    len = strstr(str1, str2);

    printf("Length of non-repeated line: %d\n", len - str1);
}