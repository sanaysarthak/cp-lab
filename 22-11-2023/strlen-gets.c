/* strlen()
Program in C to take a string as input from the user, using gets() function, 
and then use inbuilt-string function strlen() to get the length of the string */

#include <stdio.h>
#include <string.h>

int main() 
{  
    char s[100];
    printf("Enter the string: ");
    gets(s); //used to take input, and can be used in place of scanf() when dealing with string
    //puts(s); //used for printing, and can be used in place of printf() when dealing with string
    int l= strlen(s);
    printf("The size of string is %d", l);
    return 0;
}
