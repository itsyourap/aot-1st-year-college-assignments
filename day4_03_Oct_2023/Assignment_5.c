/*
Assignment 5:-

Given three integers a, b and c where c can be either 0 or 1.
Without using any arithmetic, relational and conditional operators set the value of a variable x based on below rules:-

If c = 0
    x = a
Else // Note c is binary
    x = b.
Examples:

Input: a = 5, b = 10, c = 0;
Output: x = 5

Input: a = 5, b = 10, c = 1;
Output: x = 10
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
    int a, b, c, x;

    // Taking input from user
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    // Setting the value of x
    x = (a * (1 - c)) | (b * c);

    // Printing the value of x
    printf("The value of x is: %d\n", x);

    return 0;
}
