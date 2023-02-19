#include<iostream>

using namespace std;

// binary search function
int binarySearch(int arr[][5], int row, int col, int target) {

    // create start and end indexes
    int start = 0;
    int end = row * col - 1 ;

    // initialize mid
    int mid = 0;

    // while start is less than end
    while(start <= end) {

        mid = (start + end) / 2;

        int rowSearch = mid / col;

        int colSearch = mid % col;

       

        int element = arr[rowSearch][colSearch];

        // return when target index is found
        if(element == target){
            return col * rowSearch + colSearch;
        } 

        // if mid element is less rhan target
        if(element < target) start = mid + 1;
        
        else end = mid - 1;
              
    }

    return -1;
} 

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    int row = 5;
    int col = 5;
    int target = 3;

    int index = binarySearch(arr, 5, 5, target); 

    if(index) {
        int eleRow = index / col;
        int colRow = index % col;
        cout << index << endl;
        cout << "Row : "<< eleRow << " Col : " << colRow  << endl;
    }
    else cout << "No element found" << endl;


    return 0;
}
