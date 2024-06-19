// #include<iostream>
// using namespace std;


// void printArr(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }


// }

// int main()
// {
//     int arr[5]={1,2,3,4,5};


//     //arr[2]=13;

//     //cout<<arr[0];

//     //user input in array
//     // cout<<"Enter 5 numbers : ";

//     // for(int i=0;i<5;i++)
//     // {
//     //     cin>>arr[i];
//     // }
    

//      //printing elements
//     // for(int item:arr){
//     //     cout<<item<<" ";
//     // }

//     printArr(arr,5);

//  return 0;
// }






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