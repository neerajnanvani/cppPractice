/**
 * Code to print this pattern
 * 
 *  * 
 *  * *
 *  * * *
 *  * * * *
 *  * * * * * 
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;
    // int col = ;

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j <= i; ++j) {

           cout << " * ";
        }
        cout << endl;
    }
}