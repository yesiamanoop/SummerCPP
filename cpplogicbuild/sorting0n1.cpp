//all the zeroes will be at starting and all 1 will be at the end[010001]---->[000011]


#include<iostream>
using namespace std;



void sorting0n1(int arr[], int size){
    int count=0;
    int count1=1;

    for(int i=0;i<size;i++){
        if (arr[i]==0){
            count++;

        }
        else{
            count1++;
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
     for(int i=count;i<size;i++){
        arr[i]=1;
    }
}
int main()
{
    int arr[5]={1,0,1,0,1};
    sorting0n1(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}