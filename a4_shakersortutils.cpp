/**
1) Module Name: a4_shakersortutils.cpp
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-11-07
4) Purpose:This is the file which consists of implementation of the various functions declared in the header file.
*/

#include "a4_header.h"

//! Shaker Sort function to sort the vector in ascending or descending order
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
                    swap(arr[i], arr[i + 1]); //! Swaps elements if they are out of order
                    swapped = true;
                }
            }

            n--;

            if (!swapped) break;  //! If no elements were swapped, the array is sorted

            swapped = false;

            for (int i = n - 1; i > 0; i--)
            {
                if (arr[i] < arr[i - 1]) 
                {
                    swap(arr[i], arr[i - 1]); //! Swaps elements if they are out of order
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
                    swap(arr[i], arr[i + 1]); //! Swaps elements if they are out of order
                    swapped = true;
                }
            }

            n--;

            if (!swapped) break;  //! If no elements were swapped, the array is sorted

            swapped = false;

            for (int i = n - 1; i > 0; i--) 
            {
                if (arr[i] > arr[i - 1])
                {
                    swap(arr[i], arr[i - 1]); //! Swaps elements if they are out of order
                    swapped = true;
                }
            }
        }
    } 
    while (swapped);
}