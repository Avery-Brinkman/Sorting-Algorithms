#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <iomanip>

using namespace std;

void printArray(int numbers[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << setw(4) << numbers[i];
    }
    cout << endl;
}

void bubbleSort(int numbers[10])
{
    for (int n = 9; n > 0; n--)
    {
        int tempVal, currMax;
        currMax = 0;
        for (int i = 0; i <= n; i++)
        {
            if (numbers[i] > numbers[currMax])
            {
                currMax = i;
            }
        }
        tempVal = numbers[n];
        numbers[n] = numbers[currMax];
        numbers[currMax] = tempVal;
    }
}
void bubbleSortStep(int numbers[10])
{
    for (int n = 9; n > 0; n--)
    {
        int tempVal, currMax;
        currMax = 0;
        for (int i = 0; i <= n; i++)
        {
            if (numbers[i] > numbers[currMax])
            {
                currMax = i;
            }
        }
        tempVal = numbers[n];
        numbers[n] = numbers[currMax];
        numbers[currMax] = tempVal;
        printArray(numbers);
        cout << setw((n + 1) * 4) << setfill(' ');
        cout << "^" << endl;
        _getch();
    }
}

int main()
{
    srand(time(NULL));

    int numbers[10];
    char res;

    cout << "Random list? (y/n)" << endl;
    cin >> res;

    if (res == 'n' || res == 'N')
    {
        for (unsigned int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
        {
            cout << i << ": ";
            cin >> numbers[i];
        }
    }
    else
    {
        for (unsigned int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
        {
            numbers[i] = rand() % 100 + 1;
        }
    }

    printArray(numbers);
    cout << "----------------------------------------" << endl;
    bubbleSortStep(numbers);
    cout << "----------------------------------------" << endl;
    cout << "DONE: " << endl;
    printArray(numbers);
}

