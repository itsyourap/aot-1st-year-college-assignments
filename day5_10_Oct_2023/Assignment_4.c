/*
Assignment 4:-

Write a program to find maximum or minimum without if…else.
Hints:
min = (y ^ (x ^ y) & -(x < y));
max = (x ^ (x ^ y) & -(x < y));

*/

/*
 * Name: Ankan Pal
 * Stream: CSE
 * Semester: 1
 * Section: 1
 * Roll: 21
 */

#include <stdio.h>

int main(){
    // Declaring variables
    int x, y, min, max;

    // Taking input from user
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Printing the minimum and maximum of x and y
    min = (y ^ (x ^ y) & -(x < y));
    max = (x ^ (x ^ y) & -(x < y));
    printf("Minimum of %d and %d is %d\n", x, y, min);
    printf("Maximum of %d and %d is %d\n", x, y, max);

    return 0;
}