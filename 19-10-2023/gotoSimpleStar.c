/* Program in C to print simple star pattern by only using goto statement

For N=5

*
**
***
****
*****

*/

#include <stdio.h>
int main()
{
    int n, i=1, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    A:
        if(i<=n)
        {
            j=1;
            B:
                if(j<=i)
                {
                    printf("*");
                    j++;
                    goto B;
                }
                printf("\n");
                i++;
            goto A;
        }
    return 0;        
}
