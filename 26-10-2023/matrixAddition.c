/* Program in C to perform 2D Matrix Addition where the size(rows and columns)
   of the matrix will be provided by the user and the elements will also be provided by the user
   
Sample Input:-

Rows: 3
Columns: 3

A : 2 3 4 3 5 6 4 5 3                 B: 1 2 1 -1 2 1 3 2 1
                                                
In matrix form: 2 3 4                 In matrix form: 1 2 1
                3 5 6                                -1 2 1
                4 5 3                                 3 2 1

Sample Output:-

3 5 5
2 7 7
7 7 4

*/

#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the no of rows: ");
    scanf("%d", &r);
    printf("Enter the no of columns: ");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    printf("Enter values for first matrix\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix A is as follows:-\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter values for second matrix\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter value for %d%d position: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix B is as follows:-\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    
    printf("On performing addition operation on the two matrices A and B, we get:- \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
