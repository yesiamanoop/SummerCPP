#include<iostream>
using namespace std;

bool isKeyPresent(int arr[][3], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][3];

    // Input values into the array
    cout << "Enter values for the 3x3 array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Example usage: check if 7 is present in the array
    int target = 7;
    if (isKeyPresent(arr, target)) {
        cout << target << " is present in the array.\n";
    } else {
        cout << target << " is not present in the array.\n";
    }

    return 0;
}
