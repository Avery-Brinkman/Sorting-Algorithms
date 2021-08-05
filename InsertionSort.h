#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>

#include "MiscFuncs.h"

using namespace std;

void InsertionSort(vector<int> &numbers, bool step = true)
{
	cout << "INSERTION SORT" << endl;
	cout << endl;
	if (step)
	{
		cout << "KEY:" << endl;
		cout << "    Current version of the vector." << endl;
		cout << "    ---- indicator for the portion that is sorted." << endl;
		cout << "    ^ indicator for the elements curently being compared." << endl;
		cout << "    Action that needs to be taken based on the comparison." << endl;
		cout << endl;
	}
	cout << "STARTING VECTOR: " << endl;
	PrintVect(numbers);
	cout << endl;

	for (int i = 1; i < numbers.size(); i++)
	{
		int currentIndex = i;

		while (currentIndex > 0)
		{
			if (step)
			{
				PrintVect(numbers);
				cout << setw(i * 4) << setfill('-') << '-' << endl;
				cout << setw((currentIndex) * 4) << setfill(' ') << '^' << "   ^" << endl;
			}

 			if (numbers[currentIndex] < numbers[currentIndex - 1])
			{
				if (step)
				{
					cout << "Swap!" << endl;
					cout << endl;
					_getch();
				}
				SwapIndVect(numbers, currentIndex - 1, currentIndex);
			}
			else
			{
				if (step)
				{
					cout << "Correct position!" << endl;
					cout << endl;
					_getch();
				}
				break;
			}
			currentIndex--;
		}
	}

	cout << "SORTED VECTOR: " << endl;
	PrintVect(numbers);
}