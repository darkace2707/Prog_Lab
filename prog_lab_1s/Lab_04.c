#include <stdio.h>

int num1, num2;
int main() {
    printf("Type a number:\n");
    scanf("%d", &num1);
    printf("%d\n", num1 >= 21 && num1 <= 56);

    printf("Type a number:\n");
    scanf("%d", &num2);
    printf("%d", (num2 & 2048) == 2048);
}