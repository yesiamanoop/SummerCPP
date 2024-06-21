/////////////////////////////////////////////////////////////////////linear search////////////////////////////////////////////////////////////////////////

//used to search a value from the array and then give a bool output 

#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size, int key){
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
       
    }
    return false;
}
int main()
{
    int arr[5]={1,5,3,6,7};

  bool Ans= linearSearch(arr,5,8);

  if(Ans){
    cout<<"Key Found";
  }
  else{
    cout<<"key not found";
  }

    cout<<linearSearch(arr,5,8);
 
}