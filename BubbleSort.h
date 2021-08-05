#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>

#include "MiscFuncs.h"

using namespace std;

void BubbleSort(vector<int>numbers, bool step = true)
{
	cout << "BUBBLE SORT: O(N^2)" << endl;
	cout << endl;
	if (step)
	{
		cout << "KEY:" << endl;
		cout << "    Current version of the vector." << endl;
		cout << "    - indicator for the portion that is sorted." << endl;
		cout << "    ^ indicator for the current elements being compared. " << endl;
		cout << endl;
	}
	cout << "STARTING VECTOR: " << endl;
	PrintVect(numbers);
	cout << endl;

	for (int n = numbers.size() - 1; n > 0; n--)
	{
		for (int i = 0; i < n; i++)
		{
			int leftIndex = i;
			int rightIndex = i + 1;

			if (step)
			{
				PrintVect(numbers);
				cout << setw((leftIndex + 1) * 4) << setfill(' ') << '^' << "   ^";
				cout << setw(((numbers.size() - (leftIndex + 1) - (numbers.size() - n - 1)) * 4) - 3) << setfill(' ') << '\0';
				cout << setw((numbers.size() - n - 1) * 4) << setfill('-');
				if (numbers.size() - n - 1 == 0)
					cout << '\0' << endl;
				else
					cout << '-' << endl;
				cout << endl;
			}

			if (numbers[leftIndex] > numbers[rightIndex])
				MySwap(numbers[leftIndex], numbers[rightIndex]);

			if (step)
				(void) _getch();
		}
	}

	cout << "SORTED VECTOR: " << endl;
	PrintVect(numbers);
}
