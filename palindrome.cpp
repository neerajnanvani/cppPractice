#include<iostream>

using namespace std;


int getLength(char arr[]) {
    int lengthOfString = 0;

    int i = 0;
    while(arr[i++] != '\0') lengthOfString++;

    return lengthOfString;
}

bool isPalindrome(char arr[]) {

    int len = getLength(arr);

   int start = 0;

   int end = len - 1;

   while(start < end) {
    if(arr[start] != arr[end]) return false;
    
    start++;
    end--;
   }

   return true;
}
int main()
{
    char arr[100];

    cout << "Enter any String: " ;
    cin.getline(arr,20);

    cout << "Input is : " << arr << endl;

    bool isPalin = isPalindrome(arr);

    cout << "Your is string is palindrome: " << isPalin << endl;

    return 0;
}
