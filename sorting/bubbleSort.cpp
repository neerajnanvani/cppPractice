#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> & arr) {

    for(int i = 1; i < arr.size(); ++i) {

        bool swapFind = false;
        for(int j = 0; j < arr.size() - i; ++j) {
            if(arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);

                swapFind = true;
            }
        }

        if(!swapFind) break;

    }
}

int main()
{
    
    vector<int> arr{3, 6, 1, 4, 2, 8};

    bubbleSort(arr);

    for(auto a: arr) {
        cout << a << " ";

    }

    cout << endl;
    return 0;
}
