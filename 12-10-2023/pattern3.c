/*

1
23
456
78910

*/

#include <stdio.h>

int main()
{
    int i, j, N, c=1;
    printf("Enter value of N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
