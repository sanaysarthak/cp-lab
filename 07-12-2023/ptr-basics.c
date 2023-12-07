// Program in C for basic understanding of pointers

#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    printf("%d\n\n", a); // prints the value stored in variable 'a'
    printf("%d\n", &a); // address of 'a' using ampersand (&)
    printf("%p\n\n", &a); 


    printf("%d\n", ptr); // address of 'a' using pointer
    printf("%p\n\n", ptr); 

    printf("%d\n\n", *ptr); // pointer variable ptr pointing to value stored in variable a

    printf("%d\n", &ptr); // printing address of pointer ptr using ampersand (&)
    printf("%p\n\n", &ptr);

    printf("%d\n", &*ptr); // first pointer directs to the value of a, then the address related to it is printed
    printf("%d\n", &*ptr);
    
    return 0;
}
