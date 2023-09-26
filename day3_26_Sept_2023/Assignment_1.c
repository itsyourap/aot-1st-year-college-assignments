/*
Assignment 1:-

Once in a land of mathematical marvels, two curious numbers named Double and Trouble lived within
the mystical realm of 100. They were always pondering over their mathematical destiny. One day, they
decided to perform the ancient modulus ritual.

Double and Trouble gathered at the center of the numeric universe, and with great precision, they
invoked the modulus operator (%). They whispered their values into the equation, and instantly, the
modulus revealed itself - a remainder, a fragment of their combined essence.

The result was a divine revelation within the realm of 100. It represented the residue, the leftover
magic, when Double and Trouble interacted mathematically. Their story, now etched into the annals of
numeric lore, showed that even in a world constrained by limits, mathematical wonders continued to
unfold.

You also write the same logic using C language to do the same to become a good mathematician.

*/

/*
 * Name: Ankan Pal
 * Stream: CSE
 * Semester: 1
 * Section: 1
 * Roll: 21
 */

#include <stdio.h>
#include <math.h>

int main() {
    // Declaring variables
    float Double = 69.0f;
    float Trouble = 43.0f;

    // Calculating remainder using fmod() function in math.h
    float remainder = fmod(Double, Trouble);

    // Printing the results
    printf("Double: %f\n", Double);
    printf("Trouble: %f\n", Trouble);
    printf("The remainder is: %f\n", remainder);

    return 0;
}
