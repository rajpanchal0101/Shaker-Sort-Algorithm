/**
1) Module Name: a4_header.h
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-11-06
4) Purpose:This is a header file which consists of all the required libraries, global variables and function's declaration.
*/ 
# pragma once
#include <iostream> 
#include <vector>
#include <algorithm> //! Standard C++ algorithm library for sorting
#include <ctime>  //! Standard C++ library for time-related functions
#include <fstream> //! Standard C++ library creating, reading and writing to files
#include <iomanip> //! Standard C++ library for formatting output

using namespace std;

/**
1) Purpose: Sorts the vector in ascending or descending order using shaker sort algorithm.
2) Parameters: arr(vector<int>), asc(bool)
3) Return type: void
4) Side Effect: None
*/
void shakerSort(vector<int> &arr, bool asc);