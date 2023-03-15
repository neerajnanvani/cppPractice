#include<iostream>
#include<vector>

using namespace std;

void subsequence(string s, vector<string>& ans, string tempString, int idx) {

    if(idx >= s.length()) {
        ans.push_back(tempString);
        return;
    }


    subsequence(s, ans, tempString, idx + 1);

    subsequence(s, ans, tempString + s[idx], idx + 1);


}


int main(int argc, char const *argv[])
{
    
    string s = "abc";

    
    vector<string> ans;


    subsequence(s, ans, "", 0);

    for(auto temp: ans) {

        cout << temp <<  " ";
    }

    cout << endl;


    return 0;
}
