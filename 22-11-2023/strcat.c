// strcat
// Built-in function in C to concatenate two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char A[100], B[100];
    printf("Enter String A: ");
    gets(A);
    printf("Enter String B: ");
    gets(B);
    // Concatenating String A with B (it will be stored in the variable passed first in the paranthesis)
    strcat(A, B); // Understand it as A= A + B
    printf("Concatenated String is:- %s", A);
    return 0;
}
