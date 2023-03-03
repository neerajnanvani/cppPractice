#include<iostream>
#include<algorithm>

using namespace std;

bool compare(char a, char b) {

    // descending
    return a > b;
}

int main()
{

    string name = "Neeraj";

    sort(name.begin(), name.end(), compare);

    cout << "name: " << name << endl;
    
    return 0;
}
