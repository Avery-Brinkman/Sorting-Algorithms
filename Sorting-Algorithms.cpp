#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "MiscFuncs.h"
#include "BubbleSort.h"
#include "SelectionSort.h"

using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;

    srand(time(NULL));

    int numbers[ARRAY_SIZE];
    cout << (sizeof(numbers) / sizeof(numbers[0])) << endl;


    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % 100 + 1;
    }
 

    printArray(numbers, ARRAY_SIZE);
    cout << "----------------------------------------" << endl;
    SelectionSort(numbers, ARRAY_SIZE, true);
    cout << "----------------------------------------" << endl;
    cout << "DONE: " << endl;
    printArray(numbers, ARRAY_SIZE);
}

