// Program in C to check whether a number entered by the user is Prime or not

#include <stdio.h>
int main()
{
    int N, c=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        if(N%i==0)
            c++;
    }
    if(c==2)
        printf("%d is a prime number", N);
    else
        printf("%d is not a prime number", N);
    return 0;
}
