/* Program in C to create a function to check whether a given number is odd or even.
The main function will take the input from the user and it will also be used for printing the answer. */

#include <stdio.h>
int check(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b= check(a);
    printf("%d\n", b); //prints the returned value
    if(b==0)
        printf("The entered number is even.");
    else
        printf("The entered number is odd.");
    return 0;
}
