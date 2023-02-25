#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int> & arr) {

    for(int i = 1; i < arr.size(); ++i) {

        // fetch first
        int value = arr[i];

        // compare

        int j = i - 1;
        for(; j >=0;  --j) {
            if(arr[j] > value) {

                // shift
                arr[j + 1] = arr[j];

            }
            else  break;
        }

        arr[j + 1] = value;
        // copy 


    }
}

int main()
{
    
    vector<int> arr{3, 6, 1, 4, 2, 8};

    insertionSort(arr);

    for(auto a: arr) {
        cout << a << " ";

    }

    cout << endl;
    return 0;
}
