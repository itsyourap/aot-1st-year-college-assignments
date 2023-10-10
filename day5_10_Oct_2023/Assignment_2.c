/*
Assignment 2:-

Write a C program to find 1s and 2s complement of a number.

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
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing the 1s and 2s complement of the number
    printf("1s complement of %d is %d\n", num, ~num);
    printf("2s complement of %d is %d\n", num, ~num + 1);

    return 0;
}