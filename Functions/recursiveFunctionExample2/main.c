#include <stdio.h>


int binarySearch(int [], int, int, int);


int main(int argc, const char* argv[])
{

	// RECURSIVE BINARY SEARCH

	int array[10] = { 1, 5, 12, 18, 23, 43, 52, 84, 102, 121 };
	int result = binarySearch(array, 0, 9, 18);
	if (result != -1)
	{
		printf("Searched value found..");
	}
	else
	{
		printf("Searched value not found..");
	}

	return 0;
}


int binarySearch(int array[], int left_index, int right_index, int searchValue)
{
	if (right_index >= left_index)
	{
		int middle_index = (left_index + right_index) / 2;

		if (array[middle_index] == searchValue)
		{
			return 1;
		}
		if (array[middle_index] > searchValue)
		{
			return binarySearch(array, left_index, middle_index - 1, searchValue);
		}
		return binarySearch(array, middle_index + 1, right_index, searchValue);
	}
	return -1; // not found
}
