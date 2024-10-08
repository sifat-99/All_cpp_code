#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[], int low, int high) {
    int pivot = arr[low]; 
    int i = low + 1;  
    int j = high;  
    for (;arr[i] <= pivot; i++);
    for (;arr[j] > pivot; j--);
    while (i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        for (++i; arr[i] <= pivot; i++);
        
        for (--j; arr[j] > pivot; j--);
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = Partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main() {
  
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
