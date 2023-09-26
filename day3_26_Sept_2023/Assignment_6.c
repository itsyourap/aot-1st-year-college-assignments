/*
Assignment 5:-

In a land of algorithms, Lily and Max, two ingenious programmers, encountered a peculiar task: "Swap
the value of two variables without using a third variable."

They pondered and devised a cunning plan. Lily whispered her value into Max's ear, while Max,
ever so clever, shared his value with Lily. In this magical exchange, their values danced and
intermingled, resulting in a perfect swap.

The coding world marvelled at their ingenuity, proving that in the realm of algorithms, even the
most perplexing challenges could be conquered through wit and cooperation. Lily and Max's story
became a legend, inspiring programmers to think outside the variables.

If you want to be a legend like Lily and Max, try to write the program to do the same using C
language.

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
    int Lily = 5;
    int Max = 9;

    // Printing the values of Lily and Max
    printf("Before swapping:\n");
    printf("Lily = %d\n", Lily);
    printf("Max = %d\n\n", Max);

    // Swapping the values of Lily and Max without using a third variable
    Lily = Lily + Max;
    Max = Lily - Max;
    Lily = Lily - Max;

    // Printing the values of Lily and Max after swapping
    printf("After swapping:\n");
    printf("Lily = %d\n", Lily);
    printf("Max = %d\n", Max);

    return 0;
}
