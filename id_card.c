#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int rollNo;
    char address[200];
    float spi;
};

void displayIDCard(struct Student s) {
    printf("Name       : %s\n", s.name);
    printf("Roll No    : %d\n", s.rollNo);
    printf("Address    : %s\n", s.address);
    printf("SPI        : %.2f\n", s.spi);
  
}

int main() {
    struct Student s[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter roll no: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
         s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Address: ");
        fgets(s[i].address, sizeof(s[i].address), stdin);
    
        s[i].address[strcspn(s[i].address, "\n")] = '\0';

        printf("Enter SPI: ");
        scanf("%f", &s[i].spi);

        printf("\n"); 
    }

    for (i = 0; i < 2; i++) {
        displayIDCard(s[i]);
    }

    return 0;
}

