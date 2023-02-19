#include<iostream>
#include<vector>

using namespace std;

// binary search function
int binarySearch(vector<int> arr, int target) {

    // create start and end indexes
    int start = 0;
    int end = arr.size() - 1;

    // initialize mid
    int mid = 0;

    // while start is less than end
    while(start <= end) {

        mid = start + (end - start) / 2;

        // return when target index is found
        if(arr[mid] == target) {
            return mid;
        }
        if(mid + 1 < arr.size() && arr[mid + 1] == target) return mid + 1;

        if(mid - 1 > -1 && arr[mid - 1] == target) return mid - 1;

        // if mid element is less than target
        if(arr[mid] < target) start = mid + 2;
        
        else end = mid - 2;
              
    }

    return -1;
} 

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};



    int target = 40;

    int index = binarySearch(arr, target);    

    cout << "index: " << index << endl;
    return 0;
}
