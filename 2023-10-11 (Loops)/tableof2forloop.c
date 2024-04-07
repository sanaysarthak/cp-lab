// Program to print the multiplication table of 2 (using for loop)

#include <stdio.h>
int main()
{
    int prod;
    for(int i=1; i<=10; i++)
    {
        prod = 2*i;
        printf("%d", prod);
        printf("\n");
    }
    return 0;
}