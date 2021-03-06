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
    int numOfValues = 20;

    srand(time(NULL));

    vector<int> numbers;

    for (int i = 0; i < numOfValues; i++)
    {
        numbers.push_back(rand() % 100 + 1);
    }

    QuickSort(numbers);
 }

