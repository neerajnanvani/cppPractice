#include<iostream>
#include<vector>

using namespace std;

// void swap(vector<int>, ) {

// }

int main() {

  vector<int> arr{0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0};

  int index = 0;
  int start = 0;
  int end = arr.size() - 1;

  while(index != end) {

    if(arr[index] == 0) {
      swap(arr[index], arr[start]);
      ++index;
      ++start;
    }
    else {
      swap(arr[index], arr[end]);
      --end;
    }
  }


  for(auto val: arr) {
    cout << val << " ";
  }

  cout << endl;
  return 0;
}