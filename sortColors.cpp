#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int> &arr) {

    int start = 0;

    int mid = 0;

    int end = arr.size() - 1;

    while(mid <= end) {
        if(arr[mid] == 0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else{
            swap(arr[end], arr[mid]);
            end--;
        }
    }
}

int main() {

    vector<int> arr{1, 0, 1, 2, 1, 0, 1, 2};

    sortColors(arr);

    for(auto a: arr) {
        cout << a << " " ;
    }

    cout << endl;
}