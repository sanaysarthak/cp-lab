/* Program in C to make a simple calculator using loop, which will run 
infinitely until the user enters 0 to terminate the program. */

#include <stdio.h>
int main()
{ 
    int c, n1, n2;

    for(;;)
    {
        printf("Enter 1 for addition, 2 for multiplication, 3 for division, 4 for subtraction 0 for EXIT :  ");
        scanf("%d", &c);
        if(c==0)
        {
            printf("Program exited.");
            break;
        }
        if(c<0 || c>4)
        {
            printf("Enter correct choice.\n\n");
            continue;
        }
        printf("Enter 1st number: ");
        scanf("%d", &n1);
        printf("Enter 2nd number: ");
        scanf("%d", &n2);
        if(c==1)
            printf("Sum of %d and %d is %d \n\n", n1, n2, n1+n2);
        if(c==2)
            printf("Product of %d and %d is %d \n\n", n1, n2, n1*n2);
        if(c==3)
            printf("Quotient of %d and %d is %d \n\n", n1, n2, n1/n2);
        if(c==4)
            printf("Difference of %d and %d is %d \n\n", n1, n2, n1-n2);
    }
    return 0;
}
