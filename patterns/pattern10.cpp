/**
 * Code to print this pattern
 * 
 *     *
 *    * *
 *   *   * 
 *  *     *
 * * * * * *
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;

    for(int i = 0; i < row; ++i) {

        // print spaces initially
        for(int j = 0; j < row - i; ++j) {

           cout << " " ;
        }

        // print pattern
        for(int j = 0; j <= i; ++j) {

            // print * on initial and last indexes
            if(i == row - 1 || j == 0 || j == i) cout << " *";
            // else print spaces
            else cout << "  ";
        }
        cout << endl;
    }
}