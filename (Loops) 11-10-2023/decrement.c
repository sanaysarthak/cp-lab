// Program to print 5 to 1 (reverse) using while loop

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(n>=1)
    {
        printf("%d", n);
        printf("\n");
        n--;
    }
    return 0;
}