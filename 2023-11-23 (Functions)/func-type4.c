/* Type 4:-
Parameters Passed -> Yes
Returns -> Yes */

#include <stdio.h>
int sum(int x, int y)
{
    int c=0;
    c= x+y;
    return c;
}

int main()
{
    int p=0, a=20, b=30;
    p= sum(a, b);
    printf("%d", p);
    return 0;
}
