#include<iostream>

using namespace std;

// binary search function
int binarySearch(int arr[], int start, int end, int target) {

    // initialize mid
    int mid = 0;

    // while start is less than end
    while(start <= end) {

        mid = (start + end) / 2;

        int element = arr[mid];

        // return when target index is found
        if(element == target) return mid;

        // if mid element is less rhan target
        if(element < target) start = mid + 1;
        
        else end = mid - 1;
              
    }

    return -1;
} 

int exponentialSearch(int arr[], int n, int target) {

    if(arr[0] == target) return 0;

    int i = 1;

    while(i < n && arr[i] <= target) {
        i *= 2;
    }

    return binarySearch(arr, i/ 2, i, target);
}

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 9, 11, 13 , 45, 76, 101, 150, 203};

    int target = 76;

    int index = exponentialSearch(arr,13 , target);    

    cout << "index: " << index << endl;
    return 0;
}
