// strcpy
// Built in function in C to copy a string from one variable to another
#include <stdio.h>
#include <string.h>

int main()
{
    char A[100], B[100];
    printf("Enter string to be stored in A which will be copied in B as well:- \n");
    gets(A);    
    // Copying string from variable A to B
    strcpy(B, A); // Syntax:- strcpy(destination, source)   
    printf("String A:- %s", A);
    printf("\nString B:- %s", B);
    return 0;
}
