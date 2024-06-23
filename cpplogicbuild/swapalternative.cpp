#include<iostream>
using namespace std;

void swapAlternative(int arr[], int size){
    for(int i = 0; i < size - 1; i += 2){
        
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int arr[4] = {4, 3, 2, 1};
   // int size = 4;

    swapAlternative(arr, 4);


    cout << "Swapped Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
