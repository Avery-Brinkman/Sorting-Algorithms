#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>

#include "MiscFuncs.h"

using namespace std;

void InsertionSort(int numbers[], int ARRAY_SIZE, bool step = false)
{
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		int currentIndex = i;
		while (currentIndex > 0)
		{
			if (step)
			{
				cout << "Sorted" << setw((i * 4) - 5) << setfill('-') << "|" << endl;
				printArray(numbers, ARRAY_SIZE);
				cout << setw((currentIndex) * 4) << setfill(' ') << "^" << setw(4) << setfill(' ') << "^" << endl;
				_getch();
			}
 			if (numbers[currentIndex] < numbers[currentIndex - 1])
			{
				if (step)
					cout << "Swap!" << endl;
				swapInd(numbers, currentIndex - 1, currentIndex);
				//int tempVal = numbers[currentIndex - 1];
				//numbers[currentIndex - 1] = numbers[currentIndex];
				//numbers[currentIndex] = tempVal;
			}
			else
			{
				if (step)
					cout << "Correct position!" << endl;
				break;
			}
			currentIndex--;
		}
	}
}