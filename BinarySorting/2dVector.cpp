#include<iostream>
#include<vector>

using namespace std;
int main(int argc, char const *argv[])
{
    int row = 5;
    int col =5;

    vector<vector<int>> arr(row, vector<int>(col, 10));

    for(int i = 0; i < arr.size(); ++i) {
        for(int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " " ;
        }

        cout << endl;
    }
    return 0;
}
