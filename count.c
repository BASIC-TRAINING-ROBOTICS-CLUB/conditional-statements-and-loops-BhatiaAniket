#include <stdio.h>

int main() {
    int number, digit;
    int sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) 
    {
        digit = number % 10; 
        sum = sum+digit;         
        count++;               
        number /= 10;          
    }

    printf("Total number of digits: %d\n", count);
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
