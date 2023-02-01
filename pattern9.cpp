/**
 * Code to print this pattern
 * 
 *         1
 *       2 3 2
 *     3 4 5 4 3
 *   4 5 6 7 6 5 4
 * 5 6 7 8 9 8 7 6 5
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 5;

    // loop runs for row
    for(int i = 0; i < row; ++i) {

        // count max space to print before number
        int maxSpaces = (row - i + 1) * 2;

        // loop to print space
        for(int space = 0; space < maxSpaces; ++space) {
            cout << " ";
        }

        // count the last num to ascending order
        int lastNum = ((i + 1) * 2) - 1;

        // print nums in ascending 
        for(int j = i; j < lastNum; ++j) {
            cout << j + 1 << " ";
        }

        // print nums to descending
        for(int j =lastNum - 1; j > i; --j) {
            cout << j << " ";
        }
        cout << endl;
    }
}