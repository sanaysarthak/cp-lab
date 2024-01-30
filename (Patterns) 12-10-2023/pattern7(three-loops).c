/*

   *
  **
 ***
****

(using three loops)

*/

#include <stdio.h>

int main()
{
    int i, j, k, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i-1; j++)
        {
            printf(" ");
        }
        for(k=1; k<=N-i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
