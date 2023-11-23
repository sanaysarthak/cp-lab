// Simple program in C demonstrating the use of functions, where the main function is written before the child function

int sum(); // declaring the function

int main()
{
    sum();
}

int sum()
{
    int a=10, b=20, c=0;
    c= a+b;
    printf("%d", c);
}
