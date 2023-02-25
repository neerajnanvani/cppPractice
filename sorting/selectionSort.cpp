#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> & arr) {

    for(int i = 0; i < arr.size() - 1; ++i) {
        int replaceIndex = i;
        int minElement = arr[i];

        for(int j = i + 1; j < arr.size(); ++j) {
            if(arr[j] < minElement) {

                minElement = arr[j];

                replaceIndex = j;
            }
        }

        swap(arr[i], arr[replaceIndex]);

    }
}

int main()
{
    
    vector<int> arr{3, 6, 1, 4, 2, 8};

    selectionSort(arr);

    for(auto a: arr) {
        cout << a << " ";

    }

    cout << endl;
    return 0;
}
