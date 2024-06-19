#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    //cout<<arr[0];

    //user input in array
    cout<<"Enter 5 numbers : ";

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

     //printing elements
    for(int item:arr){
        cout<<item<<" ";
    }
 return 0;
}