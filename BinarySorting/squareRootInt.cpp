#include<iostream>

using namespace std;

// binary search function
int findIntSqrt(int arr[], int size, int target) {

    // create start and end indexes
    int start = 0;
    int end = size - 1;

    // initialize mid
    int mid = 0;

    int ans = -1;

    // while start is less than end
    while(start <= end) {

        mid = (start + end) / 2;

        int element = arr[mid] * (arr[mid]);

        // return when target index is found
        if(element  == target) {
           return mid;
        }

        // if mid element is less rhan target
        if(element < target){
            ans = mid;
            start = mid + 1;  
        } 
        
        else end = mid - 1;
              
    }

    return ans;
} 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target = 49;

    int index = findIntSqrt(arr,10, target);    

    cout << "index: " << index << endl;
    return 0;
}
