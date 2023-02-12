/**
 * Code to print this pattern
 * 
 *         1
 *       1 2 1
 *     1 2 3 2 1
 *   1 2 3 4 3 2 1
 * 1 2 3 4 5 4 3 2 1
 * 
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row;

    cout << "Enter max Rows: ";
    cin >> row;

    for(int i = 0; i < row; ++i) {

        // find max space per row
        int maxSpaces = (row - i) * 2;

        // print spaces initially
        for(int j = 0; j < maxSpaces; ++j) {
            cout << " " ;
        }

        // print pattern ascending
        for(int j = 0; j < i; j += 1) {

           cout << j + 1 << " " ;
        }

        // print pattern descending
        for(int j = i; j >= 0; j -= 1) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}