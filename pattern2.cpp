/**
 * Code to print this pattern
 * 
 *  * * * * *
 *  *       *
 *  * * * * * 
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 3;
    int col = 7;

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {

            if((i == 0 || i == row -1)  || (j < 1 || j > col - 2))
                cout << " * ";
            // else if() {
            //     cout << " * ";
            // }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}