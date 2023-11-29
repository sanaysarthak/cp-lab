/* Program in C to find the factorial of a number using concept of finite recursion.
Take the number as input from the user
The factorial has to be printed from the main function */


// simpler method to find the factorial, using just 1 parameter

#include <stdio.h>

int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}

int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int x= fact(n);
    printf("Factorial is: %d", x);
    return 0;
}
