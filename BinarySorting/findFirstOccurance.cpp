#include<iostream>

using namespace std;

// binary search function
int binarySearch(int arr[], int size, int target) {

    // create start and end indexes
    int start = 0;
    int end = size - 1;

    // initialize mid
    int mid = 0;

    int index = -1;

    // while start is less than end
    while(start <= end) {

        mid = (start + end) / 2;

        int element = arr[mid];

        // return when target index is found
        if(element == target) {
            index = mid;
            end = mid - 1;
            continue;
        }

        // if mid element is less rhan target
        if(element < target) start = mid + 1;
        
        else end = mid - 1;
              
    }

    return index;
} 

int main()
{
    int arr[] = {2, 4, 7, 7, 7, 9, 11, 13 };

    int target = 7;

    int index = binarySearch(arr,8, target);    

    cout << "index: " << index << endl;
    return 0;
}
