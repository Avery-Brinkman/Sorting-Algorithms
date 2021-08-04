#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>

using namespace std;

void printArray(int numbers[], int ARRAY_SIZE)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << setw(4) << setfill(' ') << numbers[i];
	}
	cout << endl;
}
void printVect(vector<int>numbers, int ARRAY_SIZE)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
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

void swapIndVect(vector<int> &numbers, int indexA, int indexB)
{
	if (indexA == indexB)
		return;
	int temp = numbers[indexB];
	numbers[indexB] = numbers[indexA];
	numbers[indexA] = temp;
}
