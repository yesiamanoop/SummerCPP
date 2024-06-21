/////////////////////1.sort    2.middle point====sindex+eindex/2  3.if mid =key true  4.if key>mid=s=mid+1    5.if key<mid=e=mid-1
/////////////////////////////////////////////////////////////BINARY SEARCH/////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;



bool binarysearch(int arr[],int size,int key)
{
int start=0;
int end=size-1;
int mid=(start+end)/2;
if (arr[mid]==key){
    return true;
}   
while(start<=end){
    if(arr[mid]== key){
        return true;
    }
    if (key>arr[mid]){
        //go to right part
     start=mid+1;
    }
    else{
        //go to left part
        end=mid-1;
    }
    mid=(start+end)/2;
} 
return false;

}
int main()
{
    int arr[6]={1,2,3,4,5,6};

    cout<<binarysearch(arr,6,4);
 
}
///////////find the index number
