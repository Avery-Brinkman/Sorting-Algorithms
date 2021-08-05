#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>

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
			MySwap(numbers[i], numbers[storeIndex]);
			storeIndex++;
		}
	}

	MySwap(numbers[pivotIndex], numbers[storeIndex - 1]);

	QuickSortStartEnd(numbers, pivotIndex, storeIndex - 1);
	QuickSortStartEnd(numbers, storeIndex, endInd);
}

void QuickSortStartEndStep(vector<int> &numbers, int startInd, int endInd, vector<bool> &tracker)
{
	if (endInd - startInd <= 1)
	{
		if (startInd >= 0 && startInd < numbers.size() && endInd < numbers.size())
			tracker[startInd] = true;

		if (startInd == endInd)
			cout << "There is nothing here to sort, ";
		else
			cout << "This is the only place that this number can be, ";
		cout << "so it's already sorted!" << endl;
			
		PrintVect(numbers);
		PrintTracker(tracker); 
		cout << endl;

 		(void) _getch();
		return;
	}

	int pivotIndex = startInd;
	int storeIndex = pivotIndex + 1;

	for (int i = storeIndex; i < endInd; i++)
	{
		if (numbers[i] < numbers[pivotIndex])
		{
 			MySwap(numbers[i], numbers[storeIndex]);
			storeIndex++;
		}
	}

	MySwap(numbers[pivotIndex], numbers[storeIndex - 1]);

	tracker[storeIndex - 1] = true;

	PrintVect(numbers);
	PrintTracker(tracker);
	cout << endl;
	(void) _getch();

	cout << "Sorted the " << numbers[pivotIndex] << " on the left of " << numbers[storeIndex - 1] << '.' << endl;
	QuickSortStartEndStep(numbers, pivotIndex, storeIndex - 1, tracker);

	cout << "Sorted the ";
	if (storeIndex == endInd)
		cout << numbers[storeIndex - 1];
	else
		cout << numbers[storeIndex];
	cout << " on the right of " << numbers[storeIndex - 1] << '.' << endl;
	QuickSortStartEndStep(numbers, storeIndex, endInd, tracker);
}

void QuickSort(vector<int> &numbers, bool step = true)
{
	cout << "QUICK SORT: O(N log(N))" << endl;
	cout << endl;
	if (step)
	{
		cout << "KEY:" << endl;
		cout << "    What was just sorted." << endl;
		cout << "    Current version of the vector." << endl;
		cout << "    ---- indicator for the portion that is sorted." << endl;
		cout << "                   OR" << endl;
		cout << "    An explaination for why the number is in the right spot. " << endl;
		cout << endl;
	}
	cout << "STARTING VECTOR: " << endl;
	PrintVect(numbers);
	cout << endl;

	if (step)
	{
		vector<bool> tracker;
		tracker.assign(numbers.size(), false);
		cout << "Sorting " << numbers[0] << endl;
		QuickSortStartEndStep(numbers, 0, numbers.size(), tracker);
	}
	else
	{
		QuickSortStartEnd(numbers, 0, numbers.size());
	}

	cout << "SORTED VECTOR: " << endl;
	PrintVect(numbers);
}