#include<iostream>
using namespace std;

int main(){
    int x = 5;

    int *ptr = &x;

    int **ptr2 = &ptr;    

    cout << &x << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;

    cout << ptr2 << endl; 
    cout << **ptr2 << endl;

}