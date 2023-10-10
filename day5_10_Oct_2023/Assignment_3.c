/*
Assignment 3:-

Write a program to convert character to lowercase and uppercase.
Hints: To convert a character ch to lowercase use ch = ch | ' '. Whether ch is uppercase or lowercase. Result of this is always a lowercase character.
To convert a character ch to uppercase use ch = ch & '_'. It always return uppercase character, doesn’t matter whether ch is uppercase or lowercase.

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
    char ch;

    // Taking input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Printing the lowercase and uppercase of the character
    printf("Lowercase of %c is %c\n", ch, ch | ' ');
    printf("Uppercase of %c is %c\n", ch, ch & '_');

    return 0;
}