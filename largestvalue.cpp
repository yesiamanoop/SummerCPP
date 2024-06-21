/////////////////////////////////////////////////////////////////////////////maximum among the array////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;


int getMax(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
        
    }
    return max;
    
}
int main()
{
   int arr[5]={1,2,3,4,5};

   cout<<getMax(arr,5);

    
 return 0;
}