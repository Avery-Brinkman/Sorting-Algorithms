#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>

using namespace std;

//void printArray(int numbers[], int ARRAY_SIZE)
//{
//	for (int i = 0; i < ARRAY_SIZE; i++)
//	{
//		cout << setw(4) << setfill(' ') << numbers[i];
//	}
//	cout << endl;
//}

void PrintVect(vector<int>numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << setw(4) << setfill(' ') << numbers[i];
	}
	cout << endl;
}

void swapInd(int numbers[], int indexA, int indexB)
{
	if (indexA == indexB)
		return;
	int temp = numbers[indexB];
	numbers[indexB] = numbers[indexA];
	numbers[indexA] = temp;
}

void MySwap(int &a, int &b)
{
	//if (a == b)
	//	return;
	int temp = a;
	a = b;
	b = temp;
}

void PrintTracker(vector<bool> tracker)
{
	for (int i = 0; i < tracker.size(); i++)
	{
		if (tracker[i])
			cout << "----";
		else
			cout << "    ";
	}
	cout << endl;
}
