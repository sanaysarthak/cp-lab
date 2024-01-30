// Program to print the multiplication table of 2 (using while loop)

#include <stdio.h>
int main()
{
    int prod, i=1;
    while(i<=10)
    {
        prod = 2*i;
        printf("%d", prod);
        printf("\n");
        i++;
    }
    return 0;
}