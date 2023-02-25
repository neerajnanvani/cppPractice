#include<iostream>
#include<vector>

using namespace std;

void moveNegativeToLeft(vector<int> &arr) {

    int start = 0;

    int end = arr.size() - 1;

    while(start <= end) {

        if(arr[start] < 0) start++;

        else if(arr[end] >= 0) end--;

       else {
        swap(arr[start], arr[end]);
       }
    }
}

int main() {

    vector<int> arr{-1, 1, 2, -3, 4, -5, 6};

    moveNegativeToLeft(arr);

    for(auto a: arr) {
        cout << a << " " ;
    }

    cout << endl;
}