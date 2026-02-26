#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 * Function prototype
*******************************************************************************/

void towerHanoi(int n, string start, string aux, string dest, int& moves) {
    if (n==0) return;

    // call again to move n-1 from start to aux...via magic
    towerHanoi(n-1, start, dest, aux, moves);

    // at this point, 0 cause has been triggered, so n = 1, smallest disk moves, then proceed below
    ++moves;
    cout << "Move# " << moves << ": Move disc " << n << " from " << start << " to " << dest << endl;

    // 
    towerHanoi(n-1, aux, start, dest, moves);
    
}

void printArrays(int* rod1, int top1, int* rod2, int top2, int* rod3, int top3) {
    cout << "Rod 1: ";
    for (int i = 0; i <= top1; i++)
        cout <<  rod1[i] << " ";
    cout << endl;

    cout << "Rod 2: ";
    for (int i = 0; i <= top2; i++)
        cout << rod2[i] << " ";
    cout << endl;

    cout << "Rod 3: ";
    for (int i = 0; i <= top3; i++)
        cout << rod3[i] << " ";
    cout << endl;

    cout << "------------------------" << endl;
 }

// helper function to move values between arrays
void moveArrayDisc(int* from, int* to, int& topFrom, int& topTo, int& moves) {
    // point to array and grab value in "highest" index
    int disc = *(from + topFrom); 
    --topFrom;
    ++topTo;
    *(to + topTo) = disc;   // index being pointed to now equals the "disc" we moved

    ++moves;
    cout << "Move# " << moves << ": Move disc " << disc << endl;
 }

void arraysOfHanoi(int n, int* start, int* aux, int* dest, int& topRod1, int& topRod2, int& topRod3, int& moves) {
    if (n==0) return;

    arraysOfHanoi(n-1, start, dest, aux, topRod1, topRod3, topRod2, moves);

    moveArrayDisc(start, dest, topRod1, topRod3, moves);
    
    // TODO: this is gonne print weird cause the rods are all flip flopped, also hard coded SIZE boooooo
    printArrays(start, topRod1, aux, topRod2, dest, topRod3);

    arraysOfHanoi(n-1, aux, start, dest, topRod2, topRod1, topRod3, moves);
}

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls a function to recursively determine
 * solutions for the first 5 instances of the Tower of Hanoi problem.
 * 
 * Input:
 * N/A
 *
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    const int SIZE = 5;

    // solve the first 5 cases of the Tower of Hanoi problem
    for (int i = 1,numMoves = 0; i <= 5; i++, numMoves = 0) {
        cout << setfill('-') << setw(40) << "" << endl;
        cout << "Trying n = " << i << endl << endl;
        towerHanoi(i, "Rod #1", "Rod #2", "Rod #3", numMoves);
        cout << endl << "Number of Moves = " << numMoves << endl;
    }

    int Rod1[SIZE], Rod2[SIZE]{0}, Rod3[SIZE]{0};
    for (int i = 0; i < SIZE; ++i) Rod1[i] = i + 1;
    int moves = 0;

    int topRod1 = SIZE - 1; // index of "highest" disc (filled index)
    int topRod2 = -1; // starts empty
    int topRod3 = -1; // starts empty

    cout << "Start Rod 1: ";
    for (int i = 0; i < SIZE; ++i) cout << Rod1[i] << " ";
    cout << endl;

    arraysOfHanoi(SIZE, Rod1, Rod2, Rod3, topRod1, topRod2, topRod3, moves);

    cout << "Final Rod 3: ";
    for (int i = 0; i < SIZE; ++i) cout << Rod3[i] << " ";
    cout << endl;

    // terminate
    return 0;
}
