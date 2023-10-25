/* WAP in C which takes input from user and will print row-wise mapping and column-wise mapping in ascending and descending order

Sample Input: 1 12 3 9 22 4 8 7 6
In matrix form: 1  12  3
                9  22  4
                8  7   6
                
Output:-
Ascending Row-wise mapping:      1 12 3 9 22 4 8 7 6 
Ascending Column-wise mapping:   1 9 8 12 22 7 3 4 6 
Descending Row-wise mapping:      6 7 8 4 22 9 3 12 1 
Descending Column-wise mapping:   6 4 3 7 22 12 8 9 1 
*/


#include <stdio.h>
int main() 
{
    int a[3][3];
    // For taking user input
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter value for %d%d position: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nAscending Row-wise mapping:      ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    
    printf("\nAscending Column-wise mapping:   ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", a[j][i]);
        }
    }
    
    printf("\nDescending Row-wise mapping:      ");
    for(int i=2; i>=0; i--)
    {
        for(int j=2; j>=0; j--)
        {
            printf("%d ", a[i][j]);
        }
    }
    
    printf("\nDescending Column-wise mapping:   ");
    for(int i=2; i>=0; i--)
    {
        for(int j=2; j>=0; j--)
        {
            printf("%d ", a[j][i]);
        }
    }
    
    /* For printing the array as a 3*3 matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    } */
    
    return 0;
}
