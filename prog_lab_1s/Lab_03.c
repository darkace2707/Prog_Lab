#include <stdio.h>

int num, num2;

int main() {
    printf("Type hex Number:\n");
    scanf("%x", &num);

    printf("Oct Numder:\n%o\n", num);

    printf("Hex Number, Number << 4:\n%x, %x\n", num, num << 4);

    int num1 = num;
    printf("Decremented Number:\n%x\n", --num1);

    printf("Type hex Number2:\n");
    scanf("%x", &num2);
    printf("Number and Number2:\n%x", num & num2);
}