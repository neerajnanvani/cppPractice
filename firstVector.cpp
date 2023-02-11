#include<iostream>
#include<vector>

using namespace std;

int main()
{
  
  // create vector without any size
  vector<int> arr;

  int ans = (sizeof(arr)/ sizeof(int));
  cout << ans << endl;

  // number of elements in vector
  cout << arr.size() << endl;

  // capacity of vector
  cout << arr.capacity() << endl;


  // add to vector
  arr.push_back(6);
  arr.push_back(4);

 // remove last member
  arr.pop_back();

  for(int i = 0; i < arr.size(); ++i) {

    cout << "arr" << i << " : " << arr[i] << endl;
  }

  // create 20 size vector with initial 2910 value
  vector<int> v1(20, 2910);

  for(int i = 0; i < v1.size(); ++i) {

    cout << "v1" << i << " : " << v1[i] << endl;
  }  


  vector<double> v2(5);

  for(int i = 0; i < v2.size(); ++i) {

    cout << "v1" << i << " : " << v2[i] << endl;
  }  
  return 0;
}
