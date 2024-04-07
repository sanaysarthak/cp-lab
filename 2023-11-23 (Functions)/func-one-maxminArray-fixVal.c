/* Program in C to create a single function to find out both maximum and minimum elements from an array.
Print the result using the main function.
Taking hardcoded values for the array. (eases out the complexity) */

#include <stdio.h>

int findMinMax(int x[], int *max, int *min)
{
	*min= x[0];
	*max= x[0];
	for(int i=0; i<5; i++)
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
	int a, b;
	int arr[5] = {40, 55, 100, 404, 5};
	findMinMax(arr, &a, &b);
	printf("Maximum element is %d\n", a);
	printf("Minimum element is %d\n", b);
	return 0;
}
