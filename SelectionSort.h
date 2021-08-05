#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>

#include "MiscFuncs.h"

using namespace std;

void SelectionSort(vector<int> &numbers, bool step = true)
{
	cout << "SELECTION SORT" << endl;
	cout << endl;
	if (step)
	{
		cout << "KEY:" << endl;
		cout << "    Current version of the vector." << endl;
		cout << "    ---- indicator for the portion that is sorted." << endl;
		cout << "    * indicator for the current minimum. " << endl;
		cout << "    ^ indicator for the current comparison. " << endl;
		cout << endl;
	}
	cout << "STARTING VECTOR: " << endl;
	PrintVect(numbers);
	cout << endl;

	for (int startIndex = 0; startIndex < numbers.size(); startIndex++)
	{
		int minIndex = startIndex;
		for (int comparsionIndex = startIndex + 1; comparsionIndex < numbers.size(); comparsionIndex++)
		{
			if (step)
			{
				PrintVect(numbers);
				if (startIndex != 0)
					cout << setw(4 * startIndex) << setfill('-') << '-';
				cout << setw(4 * ((minIndex - startIndex) + 1)) << setfill(' ') << '*' << setw((4 * (comparsionIndex + 1)) - (4 * (minIndex + 1))) << setfill(' ') << '^' << endl;
				cout << endl;
 				_getch();
			}
			 
			if (numbers[comparsionIndex] < numbers[minIndex])
				minIndex = comparsionIndex;
		}
		if (minIndex != startIndex)
			swap(numbers[startIndex], numbers[minIndex]);
	}

	cout << "SORTED VECTOR: " << endl;
	PrintVect(numbers);
}