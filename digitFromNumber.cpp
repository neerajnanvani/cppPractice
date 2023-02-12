#include<iostream>

using namespace std;

int main() {

    int n;

    cout << "Enter any number: ";
    cin >> n;

    while(n) {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }

    return 0;
}