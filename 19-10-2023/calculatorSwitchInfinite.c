/* Program in C to make a simple calculator using only switch-case and goto statement, which will run 
infinitely until the user enters 0 to terminate the program. */

#include <stdio.h>
int main()
{
    int c, n1, n2;
    
    A:
        printf("Enter 1 for addition, 2 for multiplication, 3 for division, 4 for subtraction, and 0 for EXIT :  ");
        scanf("%d", &c);

    switch(c)
    {
        case 1:
            printf("Enter 1st number: ");
            scanf("%d", &n1);
            printf("Enter 2nd number: ");
            scanf("%d", &n2);
            printf("Sum of %d and %d is %d \n\n", n1, n2, n1+n2);
            goto A;
            
        case 2:
            printf("Enter 1st number: ");
            scanf("%d", &n1);
            printf("Enter 2nd number: ");
            scanf("%d", &n2);
            printf("Product of %d and %d is %d \n\n", n1, n2, n1*n2);
            goto A;
            
        case 3:
            printf("Enter 1st number: ");
            scanf("%d", &n1);
            printf("Enter 2nd number: ");
            scanf("%d", &n2);
            printf("Quotient of %d and %d is %d \n\n", n1, n2, n1/n2);
            goto A;
            
        case 4:
            printf("Enter 1st number: ");
            scanf("%d", &n1);
            printf("Enter 2nd number: ");
            scanf("%d", &n2);
            printf("Difference of %d and %d is %d \n\n", n1, n2, n1-n2);
            goto A;
            
        case 0:
            printf("Program exited.");
            break;
        
        default:
            printf("Enter correct input. \n\n");
            goto A;
    }
  
    return 0;
}
