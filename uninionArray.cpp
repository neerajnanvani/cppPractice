#include<iostream>
#include<vector>

using namespace std;


int main() {

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {6, 7, 8, 9};

  vector<int> ans;


  for(int i = 0; i < 5; ++i) {
    ans.push_back(arr1[i]);
  }

  for(int i = 0; i < 4; ++i) {
    ans.push_back(arr2[i]);
  }


  for(int  i = 0; i < ans.size(); ++i) {
    cin >> ans[i];
  }

  return 0;

}