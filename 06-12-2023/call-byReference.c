// Program in C to showcase call-by reference using a simple swap function

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int a=10, b=20;
    printf("Original Values:-\na = %d\t\tb = %d\n",a, b);
    swap(&a, &b);
    printf("After Swapping:-\na = %d\t\tb = %d",a, b);
    return 0;
}
