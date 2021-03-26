// Helper functions for the sort race

#include <cs50.h>
#include "helpers.h"

// Returns true if str is a valid flag (-a, -b, -r, or -s), false otherwise
bool check_flag(char *str)
{
    int ascii = (int) str[1];
    if (ascii == 97 || ascii == 98 || ascii == 114 || ascii == 115) //ascii values of those flags
    {
        return true;

    }
    else
    {
        return false;
    }
}

// Sorts array of n values using bubble sort
void bubble(int values[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }
    return; // function is of void data type
}

// Sorts array of n values using selection sort
void selection(int values[], int n)
{
    int temp, MinInd;
    for (int i = 0; i < n - 1; i++)
    {
        MinInd = i; // it's the index of the minimum element in the array
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[MinInd])
            {
                MinInd = j;
            }
        }
        temp = values[i];
        values[MinInd] = values[i];
        values[i] = temp;
    }
    return; // function is of void data type
}

// Sorts array of n values using insertion sort
void insertion(int values[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = values[i];
        j = i - 1;
        while (j >= 0 && key < values[j])
        {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = key;
    }
    return; // function is of void data type
}
