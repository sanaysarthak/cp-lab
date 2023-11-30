/* Program in C to print the Fibonacci series
Note:- Take the input for the number of terms from the user */

#include <stdio.h>

int fib(int num)
{
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return fib(num-1) + fib(num-2);
}

int main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
