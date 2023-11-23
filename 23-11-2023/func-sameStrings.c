/* Program in C to create a function to check whether two given strings are same or not.
The result should be printed using the main function.
Take the string as input from the user in the main function only. */

#include <stdio.h>
#include <string.h>

int check(char *s1, char *s2)
{
    if(strcmp(s1, s2)==0)
        return 0;
}

int main()
{
    char n1[100], n2[100];
    printf("Enter first string: ");
    scanf("%s", &n1);
    printf("Enter second string: ");
    scanf("%s", &n2);
    int res = check(n1, n2);
    if(res==0)
        printf("The two strings are same.");
    else
        printf("The two strings are different.");
    return 0;
}
