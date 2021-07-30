#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>

#include "MiscFuncs.h"

void SelectionSort(int numbers[], int ARRAY_SIZE, bool step = false)
{
	for (int startIndex = 0; startIndex < ARRAY_SIZE; startIndex++)
	{
		int minIndex = startIndex;
		for (int comparsionIndex = startIndex + 1; comparsionIndex < ARRAY_SIZE; comparsionIndex++)
		{
			if (step)
			{
				printArray(numbers, ARRAY_SIZE);
				cout << setw(4 * (minIndex + 1)) << setfill(' ') << "*" << setw((4 * (comparsionIndex + 1)) - (4 * (minIndex + 1))) << setfill(' ') << "^" << endl;
				_getch();
			}

			if (numbers[comparsionIndex] < numbers[minIndex])
				minIndex = comparsionIndex;
		}
		if (minIndex != startIndex)
			swap(numbers[startIndex], numbers[minIndex]);
	}
}