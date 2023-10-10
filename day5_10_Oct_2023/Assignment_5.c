/*
Assignment 5:-

Write a program to divide an integer by 4 without using '/' operator. 

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

    // Printing the division of the number by 4
    printf("%d / 4 = %d\n", num, num >> 2);

    return 0;
}