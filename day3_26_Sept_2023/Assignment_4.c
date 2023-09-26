/*
Assignment 4:-

In the realm of programming, there lived a curious coder named Alex. One day, a challenge surfaced:
"Print 'Hello World' without using any header file." Alex embarked on a quest, armed only with
knowledge and determination.

Through sheer ingenuity, Alex crafted a code incantation, defying conventions. Line by line,
character by character, the spell of "Hello World" took form. Without the aid of any header file, Alex
summoned this message, proving that determination and creativity could overcome even the most rigid
constraints.

In the annals of coding lore, Alex's tale echoed, reminding all that the spirit of innovation could
breathe life into the simplest yet most iconic of programming endeavours.

Have you identified the hint? If yes, do the same by writing a program using C language.

*/

/*
 * Name: Ankan Pal
 * Stream: CSE
 * Semester: 1
 * Section: 1
 * Roll: 21
 */

// Declare printf() function structure explicitly from stdio.h header file
int printf(const char *__format, ...);

int main() {
    printf("Hello World");

    return 0;
}

/*
To achieve this, we will need the function strucutre of printf() function from stdio.h header file.
So, first we declare #include <stdio.h> and then call the printf() function without arguments,
which, after compilation, will show an error which tells us that we need atleast one argument
and it shows us the actual function structure of printf(). We can then copy the function structure
and paste it in our code in place of #include <stdio.h> and then we can call the printf() function.
*/