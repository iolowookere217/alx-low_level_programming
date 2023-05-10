#include <stdio.h>
#include "search_algos.h"
/**
  * printer - Prints array
  * @array: Target array
  * @lower: start index of @array
  * @upper: last index of @array
  */
 void printer(int *array, size_t lower, size_t upper)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lower; i<=upper; i++)
	{
		printf("%d", array[i]);
		if (i == upper)
			printf("\n");
		else
			printf(", ");
	}
}

/**
  * binary_serch - a function that searches a value
  * in a sorted array of integers using the binary search algorithm
  * @array: a pointer to the first element of the array to search in
  * @size: is the number of elements in array
  * @value: the value to search for
  * Return: returns the first index where value is located
  */
int binary_search(int *array, size_t size, int value) 

{
    size_t lower = 0, upper = 0, mid = 0;

	if (!array || size == 0) 
		return(-1);
    
	upper = size - 1;
   
	while (lower <= upper) 
	{
		printer(array, lower, upper);
		mid = (lower + upper) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			upper = mid - 1;
		else 
			lower = mid + 1;

	}
    return -1;
}
