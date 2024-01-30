// Program to print 1 to 5 using while loop

#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d", i);
        printf("\n");
        i++;
    }
    return 0;
}
