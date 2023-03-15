#include<iostream>

using namespace std;

int main()
{

    int arr[] = {1, 4, 6, 8, 10, 14, 17, 18};

    int* firstPtr = arr;

    cout << "Arr address : " << &arr << endl;

    cout << "First pounter : " << firstPtr << endl;

    cout << *arr << endl; // arr[0]
    
    cout << *arr + 1 <<  endl; // arr[0] + 1

    cout << *(arr) + 1 << endl; // arr[0] + 1
 
    cout << *(arr + 2) << endl; // arr[2]

    cout << 3[arr] << endl;  // arr[3] because internally *(3 + arr)
    
    return 0;
}
