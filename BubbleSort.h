#pragma once
#include <iomanip>
#include <conio.h>

using namespace std;

void printArray(int numbers[], int ARRAY_SIZE)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << setw(4) << numbers[i];
	}
	cout << endl;
}

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
