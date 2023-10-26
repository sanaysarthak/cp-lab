/* Program in C to delete an element from an array from the
desired position provided by the user in 1-D array. (Array size 
and array elements will also be provided by the user)
*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	
	int p, n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int a[n];
	
	printf("Enter value of array:-\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter position to be deleted: ");
	scanf("%d", &p);
	
	for(int i=0; i<n; i++)
	{
		if(i!=p)
		{
			printf("%d\n", a[i]);
		}
		else
			continue;
	}
	
	return 0;
}
