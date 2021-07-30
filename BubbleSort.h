#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>

#include "MiscFuncs.h"

using namespace std;

void BubbleSort(int numbers[], int ARRAY_SIZE, bool step = false)
{
	for (int n = ARRAY_SIZE - 1; n > 0; n--)
	{
		for (int i = 0; i < n; i++)
		{
			int leftIndex = i;
			int rightIndex = i + 1;
			int tempVal;

			if (step)
			{
				printArray(numbers, ARRAY_SIZE);
				cout << setw((leftIndex + 1) * 4) << setfill(' ') << "^" << setw(4) << setfill(' ') << "^" << endl;
			}

			if (numbers[leftIndex] > numbers[rightIndex])
			{
				tempVal = numbers[leftIndex];
				numbers[leftIndex] = numbers[rightIndex];
				numbers[rightIndex] = tempVal;
			}

			if (step)
				_getch();
		}
	}
}
