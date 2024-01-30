// Program in C to check whether a number entered by the user is Perfect number or not
// Sample Input Data : 6, 28, 496, 8128

#include <stdio.h>
int main()
{
    int N, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1; i<N; i++)
    {
        if(N%i==0)
            sum=sum+i;
    }
    if(sum==N)
        printf("%d is a perfect number", N);
    else
        printf("%d is not a perfect number", N);
    return 0;
}
