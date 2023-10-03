/*
Assignment 1:-

Write a C program to swap the value of 2 variables with one line statement using arithmetic & assignment operators.

*/

/*
 * Name: Ankan Pal
 * Stream: CSE
 * Semester: 1
 * Section: 1
 * Roll: 21
 */

#include <stdio.h>

int main() {
    // Declaring variables
    int a, b;

    // Taking input from user
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Printing the values of a and b before swapping
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // Swapping the values of a and b
    a = a + b - (b = a);

    // Printing the values of a and b after swapping
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
