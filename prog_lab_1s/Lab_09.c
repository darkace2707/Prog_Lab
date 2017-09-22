#include <stdio.h>

int main() {

    int min_cnsm, sub_f, min_cost;

    printf("Type consumed minutes per month: ");
    scanf("%d", &min_cnsm);

    printf("Type Subscrition Fee: ");
    scanf("%d", &sub_f);

    printf("Type cost of over limit minutes: ");
    scanf("%d", &min_cost);

    if ( min_cnsm <= 499 ) {
        printf("Monthly Fee: %d\n", sub_f);
    } else {
        printf("Monthly Fee: %d\n", sub_f + (min_cnsm - 499) * min_cost);
    }

/////////////////////////////////////////////////////////////////////////

    int d;

    printf("Type digit: ");
    scanf("%d", &d);

    switch (d) {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
    return 0;
}