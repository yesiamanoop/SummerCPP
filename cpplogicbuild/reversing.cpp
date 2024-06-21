//[4,5,7,8] = [8,7,5,4]

#include<iostream>
using namespace std;


int reverse(int arr[],int size){
int start=0;
int end=size-1;
while(start<end)
{
   swap(arr[start],arr[end]);
   start++;
   end--;

}}

int main()
{
    int arr[8]={5,4,3,2,6,7,8,3};

    reverse(arr,8);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
 
}

//swap alternative elemenst of array
//pair sum
//triplet sum
//sort 0's and 1's
//find duplicate elemets
//find unique elemets
//find intersection element