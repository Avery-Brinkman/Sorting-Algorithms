#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>

#include "MiscFuncs.h"

using namespace std;

void QuickSortStartEnd(vector<int> &numbers, int startInd, int endInd)
{
	if (endInd - startInd <= 1)
		return;

	int pivotIndex = startInd;
	int storeIndex = pivotIndex + 1;
	for (int i = storeIndex; i < endInd; i++)
	{
		if (numbers[i] < numbers[pivotIndex])
		{
			swapIndVect(numbers, i, storeIndex);
			storeIndex++;
		}
	}
	swapIndVect(numbers, pivotIndex, storeIndex - 1);

	QuickSortStartEnd(numbers, pivotIndex, storeIndex - 1);
	QuickSortStartEnd(numbers, storeIndex, endInd);
}

void QuickSortStartEndStep(vector<int> &numbers, int startInd, int endInd)
{
	if (endInd - startInd <= 1)
		return;

	int pivotIndex = startInd;
	int storeIndex = pivotIndex + 1;
	for (int i = storeIndex; i < endInd; i++)
	{
		if (numbers[i] < numbers[pivotIndex])
		{
 			swapIndVect(numbers, i, storeIndex);
			storeIndex++;
		}
	}
	swapIndVect(numbers, pivotIndex, storeIndex - 1);

	printVect(numbers, numbers.size());
	cout << setw((storeIndex) * 4) << setfill(' ') << "^" << endl;
	_getch();

	QuickSortStartEndStep(numbers, pivotIndex, storeIndex - 1);
	QuickSortStartEndStep(numbers, storeIndex, endInd);
}

void QuickSort(vector<int> &numbers, bool step = false)
{
	if (step)
	{
		//int tracker[ARRAY_SIZE];
		QuickSortStartEndStep(numbers, 0, numbers.size());
	}
	QuickSortStartEnd(numbers, 0, numbers.size());
}