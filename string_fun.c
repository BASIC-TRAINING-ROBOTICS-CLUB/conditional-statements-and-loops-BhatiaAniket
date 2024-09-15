#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    char str1[] = "World";
    char str2[6]; 
    char str3[11];
    char str4[]="HELLO WORLd";
    //string copy
    strcpy(str2, str1);
    printf("str2 after strcpy: %s\n", str2);

    //string concat
    strcat(str,str1);
    printf("\n Concated string :%s",str);
    //string length
    printf("\nLength of String is: %d\n",strlen(str));
    //string compare
    strcmp(str ,str1);
    if(str==str1){
        printf("\nThe String is equal");
    }
    else {
        printf("\nThe String is  not equal");
    }

    // str upr
    printf("\nUpper String :%s",strupr(str));

    //strlwr
     printf("\n Lower String :%s",strlwr(str4));
    return 0;
}