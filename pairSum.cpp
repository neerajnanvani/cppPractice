#include<iostream>
#include<vector>

using namespace std;

int main() {
  vector<int> v1{3, 5, 6, 1, 4, 2, 9, 7};

  int sum = 9;

  // vector<int> ans;

  for(int i = 0; i < v1.size() - 1; ++i) {
    for(int j = i + 1; j <v1.size() ; ++j) {
      if(v1[i] + v1[j] == sum) {
        cout << "Pair: " << v1[i] << " : " << v1[j] << endl;
      } 
        
    }
  }

  return 0;
}