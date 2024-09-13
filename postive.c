#include<stdio.h>
void main(){
    int no;
    printf("Enter Number:");
    scanf("%d",&no);
    if(no>0){
        printf("no is positive :%d",no);

    }
    else if(no<0){
        printf("no is negavtive %d",no);
      }
    else{
        printf("Number is zero");
    }
}