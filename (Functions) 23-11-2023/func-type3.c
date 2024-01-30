/* Type 3:-
Parameters Passed -> No
Returns -> Yes */

#include <stdio.h>
int sum()
{
    int a=10, b=20, c=0;
    c= a+b;
    return c;
}

int main()
{
    int p;
    p= sum();
    printf("%d", p);
    return 0;
}
