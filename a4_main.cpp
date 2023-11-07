#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

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

int main() 
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    // Generate a vector of random nums
    vector<int> nums;
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        nums.push_back(rand() % 10000);
    }

    // Save the generated vector to a file
    ofstream inputFile("input_file.txt");

    for (int num : nums) 
    {
        inputFile << num << "\n";
    }

    inputFile.close();

    // Sort the vector in asc order
    vector<int> ascnums = nums;
    clock_t startTime = clock();
    shakerSort(ascnums, true);
    clock_t endTime = clock();
    double exetimeasc = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    // Save the sorted asc vector to a file
    ofstream ascFile("asc_sorted.txt");

    for (int num : ascnums)
    {
        ascFile << num << "\n";
    }
    ascFile.close();

    // Sort the vector in desc order
    vector<int> descnums = nums;
    startTime = clock();
    shakerSort(descnums, false);
    endTime = clock();
    double exetimedesc = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    // Save the sorted desc vector to a file
    ofstream descFile("desc_sorted.txt");

    for (int num : descnums)
    {
        descFile << num << "\n";
    }
    descFile.close();

    cout << "\nTime taken by 'Shaker Sort' to sort the array in ascending order  : " << fixed << setprecision(3) << exetimeasc << " seconds" << endl;
    cout << "\nTime taken by 'Shaker Sort' to sort the array in descending order : " << fixed << setprecision(3) << exetimedesc << " seconds" << endl;
    cout << "\nSorted files for both ascending and descending order has been created and saved successfully !!!\n";
    
    return 0;
}
