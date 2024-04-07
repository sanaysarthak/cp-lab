/*

1234
123
12
1

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
        for(j=i; j<=N; j++)
        {
            printf("%d", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
