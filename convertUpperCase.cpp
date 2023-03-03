#include<iostream>

using namespace std;


int getLength(char arr[]) {
    int lengthOfString = 0;

    int i = 0;
    while(arr[i++] != '\0') lengthOfString++;

    return lengthOfString;
}

void convertUpperCase(char arr[]) {

    int len = getLength(arr);

   int start = 0;

   while(start < len) {
    int charVal = (int) arr[start];

    if(charVal > 96 && charVal < 123 )  {
        arr[start] = (char) charVal - 32;
    }

    ++start;
   }

}
int main()
{
    char arr[100];

    cout << "Enter any String: " ;
    cin.getline(arr,20);

    cout << "Input is : " << arr << endl;

   convertUpperCase(arr);

    cout << "Your Upper Case String: " << arr << endl;

    return 0;
}
