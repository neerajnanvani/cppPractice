// find duplicate in array where array size is n and element should be n - 1
// if size = 5 then available elements should be 1 ,2 3, 4 and one is duplicate

#include<iostream>
#include<vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
        
        vector<int> arr(nums.size() -1, 1);

        for(int i = 0; i < nums.size(); ++i) {
            if(arr[nums[i] -1]) arr[nums[i] - 1] = 0;
            else return nums[i];
        }

        return -1;
    }

int main() {
    vector<int> arr{1, 2, 4, 3, 4};

    int duplicate = findDuplicate(arr);

    cout << duplicate << endl;
}