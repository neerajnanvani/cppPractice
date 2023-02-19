#include<iostream>
#include<vector>

using namespace std;

int getPivotElement(vector<int> arr) {

    int start = 0;

    int end = arr.size() - 1;

    while(start <= end) {

        // cout << start << end << endl;
        int mid = start + ( end - start ) / 2;

        if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1])  return mid;

        if(mid - 1 > -1 && arr[mid - 1] > arr[mid]) return mid - 1;

        if(arr[start] >= arr[mid]) end = mid - 1;

        else start = mid + 1;
    }

    return -1;
}

int main()
{
    
    vector<int> arr{1, 2, 3, 4, 6, 7};

    int pivot = getPivotElement(arr);

    cout << "pivot : " << pivot << endl;
 
    return 0;
}
