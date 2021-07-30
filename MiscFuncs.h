#pragma once
#include <iostream>
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
