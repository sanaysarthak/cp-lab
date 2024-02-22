// Program in C to take user-defined input and perform arithmetical operations on it (area of rectangle)
#include <stdio.h>

struct rec
{
    int length;
    int breadth;
};

int main()
{
    struct rec r1;
    printf("Enter length: ");
    scanf("%d", &r1.length);
    printf("Enter breadth: ");
    scanf("%d", &r1.breadth);
 
    int area= r1.length * r1.breadth;
    printf("Area of rectangle is : %d", area);
    
    return 0;
}
