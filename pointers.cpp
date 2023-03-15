#include<iostream>

using namespace std;

int main()
{
    
    // address of operator
    int a = 8;
    int b = 8;

    cout << "Address of a : " << &a << endl;

    cout << "Address of b : " << &b << endl;


    // assign address to address
    int* ptrA = &a;

    cout << *ptrA << endl;

    cout << *&a << endl;


    // size of pointers
    char ch = 'a';

    double db = 1.45;

    char* ptrch = &ch;

    double* ptrdb = &db;


    cout << "Size of int pointer " << sizeof(ptrA) << endl;

    cout << "Size of char pointer " << sizeof(ptrch) << endl;

    cout << "Size of double pointer " << sizeof(ptrdb)<< endl;

    // bad pointers
    // int* ptr;

    // cout << *ptr << endl;


    // // null pointer
    // int* ptr1 = 0;

    // cout << *ptr1 << endl;

    // copy pointer

    int* copyPtr = ptrA;

    cout << "Copy ptr: " << copyPtr << endl; 
    return 0;
}
