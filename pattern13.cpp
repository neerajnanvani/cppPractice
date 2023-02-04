/**
 * Code to print this pattern
 * 
 * A
 * A B A
 * A B C B A
 * A B C D C D B A
 * 
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;

    for(int i = 0; i < row; ++i) {

        // print pattern initially
        for(int j = 0; j < i; j += 1) {

           cout << char(j + 65) << " " ;
        }

        for(int j = i; j >= 0; j -= 1) {
            cout << char(j + 65) << " ";
        }
        cout << endl;
    }
}