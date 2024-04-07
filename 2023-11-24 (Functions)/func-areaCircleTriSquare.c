/* Program in C to find the area of circle, triangle or square using three different functions.
Note:- The user will provide you whether to find the area of circle, triangle or square.
Take all the inputs in the main function and also print the result using the main function. */

#include <stdio.h>
float circleArea(int r)
{
    
    float area = 3.14*(r*r);
    return area;
}

int triangleArea(int b, int h) 
{
    float area = 0.5*b*h;
    return area;
}

int squareArea(int side)
{
    int area = side*side;
    return area;   
}

float main() 
{
    int c;
    printf("Enter 1 to find area of Circle\nEnter 2 to find area of Triangle\nEnter 3 to find area of Square\n");
    scanf("%d", &c);
    if(c==1)
    {
        int r;
        printf("Enter radius of circle: ");
        scanf("%d", &r);
        float c= circleArea(r);
        printf("Area of Circle is: %f", c);
        
    }
    else if(c==2)
    {
        int b, h;
        printf("Enter base: ");
        scanf("%d", &b);
        printf("Enter height: ");
        scanf("%d", &h);
        float t= triangleArea(b, h);
        printf("Area of Triangle is: %f", t);
    }
    else if(c==3)
    {
        int side;
        printf("Enter side of Square: ");
        scanf("%d", &side);
        int s= squareArea(side);
        printf("Area of Square is: %d", s);
    }
    else
        printf("Enter correct number for choice.");
    return 0;
}
