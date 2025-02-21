#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MiscFuncs.h"
#include "QuickSort.h"
#include "SelectionSort.h"

int main() {
  int numOfValues = 20;

  srand(time(NULL));

  vector<int> numbers;

  for (int i = 0; i < numOfValues; i++) {
    numbers.push_back(rand() % 100 + 1);
  }

  QuickSort(numbers);
}
