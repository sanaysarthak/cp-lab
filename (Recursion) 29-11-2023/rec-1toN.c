// Program in C to print 1 to n using recursion. (n will be provided by the user)
#include <stdio.h>

int rec(int i, int n) 
{
    if(i<=n)
    {
        printf("%d\n", i);
        i++;
        rec(i, n);
    }
}

int main() 
{
    int n, i=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    rec(i, n);
    return 0;
}
