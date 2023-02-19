#include<iostream>

using namespace std;

int main()
{
    int arr[3][3] = {{2, 3, 7}, {6, 1, 0}, {2, 6, 4}};

    for(int i = 0; i < 3; ++i) {
        int sum =0;
        for(int j = 0; j < 3; ++j) {
            sum += arr[i][j];
        }

        cout << "sum " << i + 1 << " : " << sum << endl;
        
    }
    
    return 0;
}
