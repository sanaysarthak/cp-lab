/*

1234
 567
  89
   10

(using two loops)

*/

#include <stdio.h>

int main()
{
    int i, j, N, c=1;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(j>=i)
            {
                printf("%d", c);
                c++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
