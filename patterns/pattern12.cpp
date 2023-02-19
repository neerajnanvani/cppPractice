/**
 * Code to print this pattern
 * 
 * * * * * *
 * * *   * *
 * *       *
 * *       *
 * * *   * *
 * * * * * *
 * 
 * 
*/

#include<iostream>

using namespace std;

int main() {

    int row = 7;

    for(int i = 0; i < row; ++i) {

        // print pattern initially
        for(int j = 0; j < row - i; ++j) {

           cout << "*" ;
        }

        // then spaces
        for(int j = 0; j < i; ++j) {
            cout << "  ";
        }

        // then again pattern
        for(int j = 0; j < row - i; ++j) {
            cout << "*";
        } 
        cout << endl;
    }

    // down pattern
    for(int i = 0; i < row; ++i) {

        // print pattern initially
        for(int j = 0; j < i; ++j) {

           cout << "*" ;
        }

        for(int j = 0; j < row - i; ++j) {
            cout << "  ";
        }

        for(int j = 0; j < i; ++j) {
            cout << "*";
        } 
        cout << endl;
    }
}