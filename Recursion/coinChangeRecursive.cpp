#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int findMinCoins(vector<int> arr, int target) {


    if(target == 0) return 0;

    if(target < 0) return -1;


    int mini = INT_MAX;

    for(int i =0 ; i < arr.size(); ++i) {
       int ans = findMinCoins(arr, target - arr[i]) + 1;
         mini = min(mini, ans + 1);
    }

    return mini;
}


int main()
{
    
    vector<int> arr {1, 2, 3};

    int target = 6;
    int ans = findMinCoins(arr, target);

    cout <<  ans << endl;


    return 0;
}
