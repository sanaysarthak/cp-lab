/* Type 2:-
Parameters Passed -> Yes
Returns -> No */

#include <stdio.h>
void sum(int x, int y)
{
    int c=0;
    c= x+y;
    printf("%d", c);
}

int main()
{
    int a=10, b=20;
    sum(a, b);
    return 0;
}
