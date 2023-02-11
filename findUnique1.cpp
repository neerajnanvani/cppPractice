#include<iostream>
#include<vector>

using namespace std;

int findUniqueOne(vector<int> vec) {

  int xorSum = 0;

  for(int i = 0; i < vec.size(); ++i) {
    xorSum = xorSum ^ vec[i];
  }

  return xorSum;
}

int main() {

  int n;
  cout << "Enter size of vector: ";
  cin >> n;

  vector<int> v1(n);

  for(int  i = 0; i < v1.size(); ++i) {
    cin >> v1[i];
  }

  int unique = findUniqueOne(v1);

  cout << endl;
  cout << "Unique element: " << unique << endl;

  return 0;

}