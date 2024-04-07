/* Program in C to create two functions to find out maximum and minimum elements from an array.
Print the result using the main function.
Take hardcoded values for the array. (eases out the complexity) */

#include <stdio.h>

int maxCheck(int x[])
{
    for(int i=0; i<5; i++)
    {
        if(x[0]<x[i])
        {
            x[0]= x[i];
        }
    }
    return x[0];
}

int minCheck(int y[])
{
     for(int i=0; i<5; i++)
    {
        if(y[0]>y[i])
        {
            y[0]= y[i];
        }
    }
    return y[0];
}

int main()
{
    int max, min;
    int arr[5] = {40, 55, 100, 404, 5};
    max= maxCheck(arr);
    min= minCheck(arr);
    printf("The maximum is %d\n", max);
    printf("The minimum is %d\n", min);
    return 0;
}
