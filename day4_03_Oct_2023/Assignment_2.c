/*
Assignment 2:-

Write a program to convert centigrade to Fahrenheit.

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
    float c, f;

    // Taking input from user
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &c);
    
    // Converting centigrade to Fahrenheit
    f = (c * 9 / 5) + 32;

    // Printing the temperature in Fahrenheit
    printf("The temperature in Fahrenheit is: %f\n", f);
    
    return 0;
}
