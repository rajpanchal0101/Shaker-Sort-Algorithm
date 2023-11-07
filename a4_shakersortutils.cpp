#include "a4_header.h"

// Shaker Sort function to sort the vector in asc or desc order
void shakerSort(vector<int> &arr, bool asc)
{
    int n = arr.size();
    bool swapped;

    do 
    {

        swapped = false;
        if (asc) 
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1]) 
                {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
            }

            n--;

            if (!swapped) break;

            swapped = false;

            for (int i = n - 1; i > 0; i--)
            {
                if (arr[i] < arr[i - 1]) 
                {
                    swap(arr[i], arr[i - 1]);
                    swapped = true;
                }
            }
        } 
        
        else 
        {
            for (int i = 0; i < n - 1; i++) 
            {
                if (arr[i] < arr[i + 1]) 
                {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
            }

            n--;

            if (!swapped) break;

            swapped = false;

            for (int i = n - 1; i > 0; i--) 
            {
                if (arr[i] > arr[i - 1])
                {
                    swap(arr[i], arr[i - 1]);
                    swapped = true;
                }
            }
        }
    } 
    while (swapped);
}