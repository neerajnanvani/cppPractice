/**
 * Code to print this pattern
 * 
 * 1 2 3 4 5
 * 2     5
 * 3   5
 * 4 5
 * 5
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < row - i; ++j) {
            if(i == 0 || j == 0 || j == row - i - 1) cout << i + j + 1 << " "; 
            else cout << "  ";
        }
        cout << endl;
    }
}