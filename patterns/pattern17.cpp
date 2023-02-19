/**
 * Code to print this pattern
 * *
 * * 1 *
 * * 1 2 1 *
 * * 1 2 3 2 1 *
 * * 1 2 1 *
 * * 1 *
 * *
 * 
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row;

    cout << "Enter max Rows: ";
    cin >> row;

    cout << "* ";
    cout << endl;
    for(int i = 0; i < row; ++i) {

        cout << "* ";
        int maxCols = i < row/ 2 ? i * 2 + 1 : (row * 2) - (i * 2 + 1);

        // print pattern ascending
        for(int j = 0; j < maxCols; j += 1) {

            if(j <= i) cout << j + 1 << " " ;
            else cout << maxCols - j << " ";
        }

        cout << "* ";
        cout << endl;
    }

    cout << "* ";
    cout << endl;
    return 0;
}