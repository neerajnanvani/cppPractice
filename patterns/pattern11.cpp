/**
 * Code to print this pattern
 * 
 *     *
 *    * *
 *   *   * 
 *  *     *
 * *       *
 * *       *
 *  *     *
 *   *   *
 *    * *
 *     *
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;

    // first half pattern
    for(int i = 0; i < row; ++i) {

        // print spaces initially
        for(int j = 0; j < row - i; ++j) {

           cout << " " ;
        }

        // print pattern
        for(int j = 0; j <= i; ++j) {

            // print * on initial and last indexes
            if(j == 0 || j == i) cout << " *";
            // else print spaces
            else cout << "  ";
        }
        cout << endl;
    }

    // second half of the pattern
    for(int i = 0; i < row + 1; ++i) {

        // print spaces initially
        for(int j = 0; j < i; ++j) {

           cout << " " ;
        }

        // print pattern
        for(int j = 0; j < row - i + 1; ++j) {

            // print * on initial and last indexes
            if(j == 0 || j == row - i) cout << " *";
            // else print spaces
            else cout << "  ";
        }
        cout << endl;
    }
}