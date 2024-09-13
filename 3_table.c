#include<stdio.h>
void main()
{
    int a ,i;
    printf("Enter value of a");
    scanf("%d",&a);
    for(i = 1;i<11;i++)
    {
        printf("%d x %d =%d",a,i,a*i);
    }
}
