#include<iostream>

using namespace std;


int getLength(char arr[]) {
    int lengthOfString = 0;

    int i = 0;
    while(arr[i++] != '\0') lengthOfString++;

    return lengthOfString;
}

void reverseString(char arr[]) {
    int start = 0; 
    int length = getLength(arr);
    int end = length - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        ++start;
        --end;
    }

}

void replaceSpaces(char arr[], char ch) {

    int len = getLength(arr);

    for(int i = 0; i < len; ++i) {
        if(arr[i] == ' ') arr[i] = ch;
    }
}

int main()
{
    char name[20];

    cin.getline(name,20);

    cout << "Input is : " << name << endl;


    int lengthOfString = getLength(name);


    cout << "Length is : " << lengthOfString << endl;

    reverseString(name);

    cout << "After reverse: " << name << endl;

    cin;
    char ch;

    cout << "Enter any charater: " ;
    cin >> ch;


    replaceSpaces(name, ch); 

    cout << "After replace space with character: " << name << endl; 

    return 0;
}
