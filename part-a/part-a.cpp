#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

/*******************************************************************************
 * Function prototype
*******************************************************************************/

template <typename T>
T findMaxRecTail(const T arr[], const int size)
{
    if (size <= 0) throw std::invalid_argument("Array cannot be empty");
    // TO DO: Implement your code
    if (size == 1) return arr[0];
    T max = findMaxRecTail(arr + 1, size - 1);  
    return (arr[0] > max) ? arr[0] : max;
} 

template <typename T>
T findMaxRecBinarySplit(const T arr[], const int size)
{
    // TO DO: Implement your code
    if (size <= 0) throw std::invalid_argument("Array cannot be empty");
    if (size == 1) return arr[0];

    int midpoint = size / 2;

    T maxLeft = findMaxRecBinarySplit(arr, midpoint);
    T maxRight = findMaxRecBinarySplit(arr + midpoint, size - midpoint);

    return (maxLeft > maxRight) ? maxLeft : maxRight;
}

/*******************************************************************************
 * Description:
 * Starting point of the program. Creates two arrays, one fixed and the other
 * random. Determines the maximum value by calling the local function and the
 * standard function.
 * 
 * Input:
 * N/A
 *
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    // create the array
    const int SIZE = 10;
    int myArray[SIZE] = {
        5, 23, 0, -2, 4,
        9, 11, 21, 130, 6
    };

    // display the maximum
    cout << setfill('-') << setw(40) << "" << endl;
    try {
    cout << "Maximum using Recursion: "
         << findMaxRecTail(myArray, SIZE) << endl 
         << "From Binary split:" 
        << findMaxRecBinarySplit(myArray, SIZE)
         << "Should be 130 for the fixed array\n";
    } catch (std::invalid_argument& e) {
        cerr << "Error" << e.what();
    }
    cout << setfill('-') << setw(40) << "" << endl << endl;

    // create a random array
    const int SIZE_2 = 1000;
    const int MAX_VAL = 10000;
    int randArray[SIZE_2];
    srand(time(0));
    for (int& elem : randArray) {
        elem = rand() % MAX_VAL;
    }

    // find the maximum using C++ standard's algorithm
    cout << setfill('-') << setw(40) << "" << endl;
    cout << "Maximum using Standard Algorithm: "
         << *max_element(randArray, randArray + SIZE_2) << endl;

    // find the maximum using the recursive implementation
    try {
    cout << "Maximum using Recursion: "
         << findMaxRecTail(randArray, SIZE_2) << endl;
    } catch (std::invalid_argument& e) {
        cerr << "Error" << e.what();
    }
    cout << setfill('-') << setw(40) << "" << endl;

    // terminate
    return 0;
}

