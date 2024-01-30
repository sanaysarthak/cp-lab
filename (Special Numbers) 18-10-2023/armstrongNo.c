// Program in C to check whether a number entered by the user is Armstrong number or not
// Sample Input Data : 153, 370, 371, 1634, 9474

#include <stdio.h>
// Include math.h header file, in case the program throws an error while execution
#include <math.h>
int main() 
{
    int N, sum, d, p=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    int n1=N;
    int n2=N;
    while(n1>0)
    {
        n1=n1/10;
        p++;
    }
    while(n2>0)
    {
        d=n2%10;
        sum= sum + pow(d,p);
        n2=n2/10;
    }
    if(sum==N)
        printf("%d is an Armstrong number", N);
    else
        printf("%d is not an Armstrong number", N);
    return 0;
}
