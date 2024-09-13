#include <stdio.h>

void main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point  is in the First Quadrant.");
    } 
    else if (x < 0 && y > 0) {
         printf("The point is in the Second Quadrant.");
    } 
    else if (x < 0 && y < 0) {
        printf("The point is in the Third Quadrant.");
    } 
    else if (x > 0 && y < 0) {
         printf("The point  is in the Fourth Quadrant.");    
    } 
    else  if (x == 0) {
         printf("The point  lies on the Y-axis.");
    } 
    else if (y == 0) {
        printf("The point  lies on the X-axis.");
    } 
     else {
           printf("The point  is at the origin.");
    }
 }