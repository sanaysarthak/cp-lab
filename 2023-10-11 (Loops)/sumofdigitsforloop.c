/* Program in C to print the sum of digits of the number 
entered by the user (using for loop) */

#include <stdio.h>
int main()
{
    int n, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // for(; n>0 ;)
    for(int i=n; i>0; i=i/10)
    {
        digit = n%10;
        sum = digit + sum;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}