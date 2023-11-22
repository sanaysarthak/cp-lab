/* strlen()
Program in C to take a string as input from the user, using scanf() function, 
and then the use inbuilt-string function strlen() to get the length of the string */

#include <string.h>
#include <stdio.h>

int main() 
{    
    char s[100];
    printf("Enter the string: ");
    scanf("%s", &s);
    int l = strlen(s);
    printf("The size of string is %d", l);
    return 0;   
}
