#include <stdio.h>

void main() {
    int a,b,c;

    printf("Enter the length of side 1: ");
    scanf("%d", &a);

    printf("Enter the length of side 2: ");
    scanf("%d", &b);

    printf("Enter the length of side 3: ");
    scanf("%d", &c);

    if (a=b=c) {
        printf("The triangle is equilateral triangle.\n");
    } else {
        printf("The triangle is not equilateral triangle.\n");
    }

}