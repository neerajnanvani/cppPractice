/**
 * Code to print this pattern
 * 
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3 4 5
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j <= i; ++j) {

           cout << " " << j + 1 << " " ;
        }
        cout << endl;
    }
}