#include <stdio.h>

void main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year>2000){
        if(year%4==0){
            printf("It is a Leap year\n");
        }
        else{
            printf("It is not a Leap Year\n");
        }
    }
}