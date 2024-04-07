/* strcmp
Built in function in C to compare two strings */

#include <stdio.h>
#include <string.h>

int main()
{
    char A[100], B[100];
    printf("Enter String A: ");
    gets(A);
    printf("Enter String B: ");
    gets(B);
    // Comparing the two strings
    /* It returns 0, when A==B,
       <0, when A>B, and
       >0, when A<B */
    int res= strcmp(A, B);
    printf("%d\n", res);
    if(strcmp(A, B)==0)
        printf("The two string are same. (A==B)");
    if(strcmp(A, B)<0)
        printf("String A is greater than B (A>B)");
    if(strcmp(A, B)>0)
        printf("String A is smaller than B (A<B)");
    return 0;
}
