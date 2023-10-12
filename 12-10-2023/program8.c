/*

   1
  12
 123
1234

(using two loops)

*/

#include <stdio.h>

int main()
{
    int i, j, N, c;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        c= 1;
        for(j=N; j>=1; j--)
        {
            if(j>i)
                printf(" ");
            else
            {
                printf("%d", c);
                c++;
            }
        }
        printf("\n");
    }
    return 0;
}
