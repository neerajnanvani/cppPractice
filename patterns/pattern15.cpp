/**
 * Code to print this pattern
 * 
 *         1
 *       1   2
 *     1       3
 *   1           4
 * 1   2   3   4   5                
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

        // print spaces initially
        for(int j = 0; j < row - i; ++j) {
            cout << " " ;
        }

        // print pattern
        for(int j = 0; j <= i; j += 1) {

            if(j == 0 || j == i || i == row - 1) cout << j + 1 << " " ;
            else cout << "  ";
        }
        cout << endl;

    }
}