/*

1234
567
89
10

*/

#include <stdio.h>

int main()
{
    int i, j, N, c=1;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=i; j<=N; j++)
        {
            printf("%d", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
