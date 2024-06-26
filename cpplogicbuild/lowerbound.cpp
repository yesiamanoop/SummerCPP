#include<iostream>
using namespace std;

int lowerBound(int arr[],int size,int x){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=size;
    while(start<=end){
        if(arr[mid]>=x){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start)
    }
}
int main()
{
 return 0;
}