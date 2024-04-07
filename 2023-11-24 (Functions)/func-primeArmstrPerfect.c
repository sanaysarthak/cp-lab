/* Program in C to check whether a given number is prime, armstrong or perfect, using three functions for each case
The printing will be done using the main function, and the output for all the 3 cases will be displayed every time */ 

#include <stdio.h>
int isPrime(int x)
{
    int c=0;
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}

int isArmstrong(int y)
{
    int d, p=0, sum=0;
    int n1=y;
    int n2=y;
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
    if(sum==y)
        return 1;
    else
        return 0;
}

int isPerfect(int z)
{
    int sum=0;
    for(int i=1; i<z; i++)
    {
        if(z%i==0)
            sum=sum+i;
    }
    if(sum==z)
        return 1;
    else
        return 0;
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(isPrime(n))
        printf("Prime-> Yes\n");
    else
        printf("Prime-> No\n");
    
    if(isArmstrong(n))
        printf("Armstrong-> Yes\n");
    else
        printf("Armstrong-> No\n");
        
    if(isPerfect(n))
        printf("Perfect-> Yes\n");
    else
        printf("Perfect-> No\n");
    return 0;
}
