/* Program in C to find the factorial of a number using concept of finite recursion.
Take the number as input from the user
The factorial has to be printed from the main function */

#include <stdio.h>

int fact(int n, int p)
{
    int c= p;
    if(n>=1)
    {
        p= p*n;
        c= fact(n-1, p);
    }
    return c;
}

int main() 
{
    int n, p=1;
    printf("Enter number: ");
    scanf("%d", &n);
    int x= fact(n,p);
    printf("Factorial is: %d", x);
    return 0;
}
