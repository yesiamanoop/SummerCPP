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

int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;

        }
        else if(key>arr[mid]){
          start=mid+1;
        }

        else if(key<arr[mid]){
            start=mid-1;
        }
        mid=(start+end)/2;

    }
    return ans;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};

    cout<<binarysearch(arr,6,4);
 
}