#include <stdio.h>

int main() 
{
    int n,i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        printf("Divisors of %d are:\n", n);

        for (i = 1; i <= n; i++) 
        {
            if (n % i == 0) 
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}