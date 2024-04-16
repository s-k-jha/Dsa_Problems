//taking 2 array from user then merging them and then sorting 
//in time complexity of O((size1 + size2) * log(size1 + size2))
//space complexity-> O(size1 + size2). 

#include <iostream>
#include<algorithm>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int arr[], int siz) {
    for (int i = 0; i < siz / 2; i++) {
        swap(arr[i], arr[siz - i - 1]);
    }
}

int main() {
    int size1, size2;
    cout << "Enter size for array 1: ";
    cin >> size1;
    cout << "Enter size for array 2: ";
    cin >> size2;

    int arr1[size1];
    int arr2[size2];
    int size3 = size1 + size2;
    int arr3[size3];
    int index = 0;

    cout << "Enter elements of array 1:" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of array 2:" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < size1; i++) {
        arr3[index++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[index++] = arr2[i];
    }
        sort(arr3, arr3+size3);  //sort the arr3->final array
    cout << "Merged array AFTER SORT" << endl;
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
    }

    cout << "\nReversed array:" << endl;
    reverse(arr3, size3);
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}
