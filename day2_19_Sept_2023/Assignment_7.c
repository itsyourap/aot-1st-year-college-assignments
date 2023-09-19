/*
Assignment 7:-

Once upon a time, there was a young programmer named Alice who was working on a new project.
She had written some code that would print the contents of a folder, but she was having trouble
figuring out how to specify the path to the folder.

She decided to take a break and go for a walk to clear her head. As she was walking, she saw a
sign that said "D:\abc\xyz.txt". She realized that this was the path to the folder that she needed to print,
but the backslashes were not escaped in the code.

She went back to her computer and updated her code to print the path "D:\\abc\\xyz.txt". When she
ran the code, it successfully printed the contents of the folder. The moral of the story is that sometimes the answer to a problem is right in front of you, you just
have to look for it.

Here is the question that Alice could ask herself to help her solve the problem:
    How do I print the path "D:\\abc\\xyz.txt" in my code?

Once Alice knew how to escape the backslashes, she was able to update her code and print the
contents of the folder.

Now, if you are also able catch this trick, write a program using C language to print "D:\\abc\\xyz.txt".


Expected Output:
D:\\abc\\xyz.txt

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
    printf("D:\\\\abc\\\\xyz.txt\n");
    
    return 0;
}
