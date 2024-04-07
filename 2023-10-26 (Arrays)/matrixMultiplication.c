/* Program in C to perform matrix multiplication operation on two 3*3 matrices where the elements of the array will be given by the user

Sample Input:-
A : 2 3 4 3 5 6 4 5 3                 B: 1 2 1 -1 2 1 3 2 1
                                                
In matrix form: 2 3 4                 In matrix form: 1 2 1
                3 5 6                                -1 2 1
                4 5 3                                 3 2 1
                
Output:-
11 18 9
16 28 14
8 24 12

*/

#include <stdio.h>
int main()
{ 
    int a[3][3], b[3][3], c[3][3];
    
    printf("Enter values for first matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix A is as follows:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter values for second matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix B is as follows:-\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    
    // Matrix Multiplication and printing
    printf("On Multiplication of Matrix A and B, we get:-\n");
    for(int i=0;i<3;i++)    
    { 
        for(int j=0;j<3;j++)    
        {    
            c[i][j]=0;    
            for(int k=0;k<3;k++)    
            {   
                // You can use shorthand as well.
                // c[i][j]+= a[i][k]*b[i][k];
                c[i][j]= c[i][j] + (a[i][k]*b[k][j]);    
            }
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
