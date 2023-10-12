/* Program in C to print the sum of digits of the number 
entered by the user (using while loop) */

#include <stdio.h>
int main()
{
    int n, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // while(n!=0)
    while(n>0)
    {
        digit = n%10;
        sum = digit + sum;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}