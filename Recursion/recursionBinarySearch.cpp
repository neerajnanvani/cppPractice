#include<iostream>
#include<vector>

using namespace std;

int recursiveBinarySearch(vector<int> arr, int s, int e, int target) {
    if(s > e) return -1;

    int mid = s + (e - s) / 2;

    if(arr[mid] == target) return mid;


    if(arr[mid] < target) return recursiveBinarySearch(arr, mid + 1, e, target);

    else return recursiveBinarySearch(arr, s, mid - 1, target);
}

int main(int argc, char const *argv[])
{
    
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};

    int target = 80;

    
    int index = recursiveBinarySearch(arr, 0, arr.size() - 1, target);

    cout << "Index : " << index << endl;

    return 0;
}
