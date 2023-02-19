#include<iostream>
#include<vector>

using namespace std;

int findOneOccurance(vector<int> arr) {

    int start = 0;

    int end = arr.size() - 1;

    int mid = 0;

    while(start <= end) {

        if(start == end) return start;

        mid = start + (end - start) / 2;

        if( mid % 2 == 0) {

            if(arr[mid] == arr[mid + 1]) {
                start = mid + 2;
            }

            else {
                end = mid;
            }
        }

        else {
            if(arr[mid] == arr[mid -1]) {
                start = mid + 1;
            }
            else {  
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 6, 6, 4, 4};

    int ans = findOneOccurance(arr);

    cout<< "Ans: " << arr[ans] << endl;


}