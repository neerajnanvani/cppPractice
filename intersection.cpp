#include<iostream>
#include<vector>

using namespace std;

int main() {
  vector<int> v1{3, 5, 6, 1, 4};
  vector<int> v2{3, 9, 2, 1};

  vector<int> ans;

  for(int i = 0; i < v1.size(); ++i) {
    for(int j = 0; j < v2.size(); ++j) {
      if(v1[i] == v2[j]) {
        v2[j] = -1;
        ans.push_back(v1[i]);
      } 
        
    }
  }

  for(auto value: ans) {
    cout << value << endl;
  }

  return 0;
}