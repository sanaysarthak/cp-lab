/* Program in C to create a single function to find out both maximum and minimum elements from an array.
Print the result using the main function.
Take hardcoded values for the array. (eases out the complexity) */

#include <stdio.h>

int findMinMax(int x[], int *min, int *max)
{
	*min= x[0];
	*max= x[0];
	for(int i=0; i<5; i++)
    {
    	// Finding the maximum element
        if(*max > x[i])
	    	*max= x[i];
	    // Finding the minimum element
	    if(*min < x[i])
	    	*min= x[i];
    }
}

int main()
{
	int a, b;
	int arr[5] = {40, 55, 100, 404, 5};
	findMinMax(arr, &a, &b);
	printf("Maximum element is %d\n", a);
	printf("Minimum element is %d\n", b);
	return 0;
}
