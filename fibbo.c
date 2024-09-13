#include<stdio.h>
void main(){
    int i,n;
    int a=0,b=1;
    printf("Enter Number of terms");
    scanf("%d",&n);

    printf("\n fibonacci Series : \n %d %d ",a,b);
    while(n>0){
        printf("%d",a+b);
        b=a+b;
        a=b-a;
        n--;
    }
    
}