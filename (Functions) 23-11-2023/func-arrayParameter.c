// Program in C to pass an array as a function parameter and print all the elements of the array using that function

#include <stdio.h>
void print(int x[])
{
    for(int i=0; i<5; i++)
    {
        printf("%d\n", x[i]);
    }
}

int main()
{
    int a[5]= {30,40,50,60,70};
    print(a);
    return 0;
}
