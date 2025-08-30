#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int* ptr_x = &x;

    cout << x << endl ;
    cout << ptr_x << endl;
    cout << *ptr_x << endl; //de-referencing

/*
char is an edge case.
one byte cannot be referenced.
    char a = 'a';
    char* ptr_a = &a;
    cout << a << endl;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;
*/
}