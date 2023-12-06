/* Program in C to create a single function to find out both maximum and minimum elements from an array.
Print the result using the main function.
Take dynamic values of the array as input from the user */

#include <stdio.h>

int findMinMax(int n, int x[], int *max, int *min)
{
	*min= x[0];
	*max= x[0];
	for(int i=0; i<n; i++)
    {
    	// Finding the maximum element
        if(*min > x[i])
	    	*min= x[i];
	    // Finding the minimum element
	    if(*max < x[i])
	    	*max= x[i];
    }
}

int main()
{
    int a, b, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the array:-\n");
	for(int i=0; i<n; i++)
	{
	    scanf("%d", &arr[i]);
	}
	findMinMax(n, arr, &a, &b);
	printf("Maximum element is %d\n", a);
	printf("Minimum element is %d\n", b);
	return 0;
}
