/////////////////////////////////////////////////////////////////////////2nd largest from the array////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

void findSecondLargest(int arr[],int size)
{
    int max = 0;
    int max2 = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i]; // Update the second maximum
        }
    }

    if (max2 != 0)
    {
        cout << "The second largest element is: " << max2 << endl;
    }
    else
    {
        cout << "There is no second largest element in the array." << endl;
    }
}

int main()
{
    int arr[5] = {2, 3, 4, 6, 6};
    findSecondLargest(arr, 5);
 return 0;
}