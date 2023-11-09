/**
1) Module Name: a4_main.cpp
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-11-06
4) Purpose:This is the file which consists of the main function from where the compilation of the program commences.
*/

#include "a4_shakersortutils.cpp"  

/**
1) Purpose:This is the main function from where the program's compilation begins and various user defined functions are invoked here based on the requirement.
2) Parameters: None
3) Return type: int
4) Side Effect: None
*/
int main() 
{
    int n;
    cout << "\nEnter the size of the vector: ";
    cin >> n;

    //! Generates a vector of random nums
    vector<int> nums;
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        nums.push_back(rand() % 10000);
    }

    //! Saves the generated vector to a file
    ofstream inputFile("input_file.txt"); 

    for (int num : nums) 
    {
        inputFile << num << "\n";
    }

    inputFile.close();

    //! Reads the input vector from the "input_file.txt" file
    ifstream inpReader("input_file.txt");
    nums.clear();

    int num;
    while (inpReader >> num)
    {
        nums.push_back(num);
    }

    inpReader.close();

    //! Sorts the vector in ascending order
    vector<int> ascnums = nums;
    clock_t startTime = clock();
    shakerSort(ascnums, true);
    clock_t endTime = clock();
    double exetimeasc = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC; //! Calculates the time taken to sort the vector in ascending order

    //! Saves the sorted ascending vector to a file
    ofstream ascFile("asc_sorted.txt");

    for (int num : ascnums)
    {
        ascFile << num << "\n";
    }
    ascFile.close();

    //! Sorts the vector in descending order
    vector<int> descnums = nums;
    startTime = clock();
    shakerSort(descnums, false);
    endTime = clock();
    double exetimedesc = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC; //! Calculates the time taken to sort the vector in descending order

    //! Saves the sorted descending vector to a file
    ofstream descFile("desc_sorted.txt");

    for (int num : descnums)
    {
        descFile << num << "\n";
    }
    descFile.close();
    
    //! Prints the execution time and a success message
    cout << "\nTime taken by 'Shaker Sort' to sort the vector in ascending order  : " << fixed << setprecision(3) << exetimeasc << " seconds" << endl;
    cout << "\nTime taken by 'Shaker Sort' to sort the vector in descending order : " << fixed << setprecision(3) << exetimedesc << " seconds" << endl;
    cout << "\nSorted files for both ascending and descending order has been created and saved successfully !!!\n\n";
    
    return 0;
}
