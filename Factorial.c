#include<stdio.h>
void main(){
    int i,no,fact=1;
    printf("Enter no");
    scanf("%d",&no);
    for(i=no;i>=1;i--){
        fact=fact*i;
    }
    printf("The Factorial Of Number is %d",fact);
}