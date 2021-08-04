#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include "MiscFuncs.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;

    srand(time(NULL));

    //int numbers[ARRAY_SIZE]; //= { 3, 44, 38, 5, 47, 15, 36, 26, 27, 2 };
    vector<int> numbers;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers.push_back(rand() % 100 + 1);
    }
 

    //printArray(numbers, ARRAY_SIZE);
    printVect(numbers, ARRAY_SIZE);
    cout << "----------------------------------------" << endl;
    QuickSort(numbers);
    cout << "----------------------------------------" << endl;
    cout << "DONE: " << endl;
    printVect(numbers, ARRAY_SIZE);
 }

