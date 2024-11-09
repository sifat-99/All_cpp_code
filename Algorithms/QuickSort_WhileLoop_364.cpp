#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[], int low, int high) {
    int pivotElement = arr[low];
    int i = low + 1;
    int j = high;
    while (i <= j) {
        while (arr[i] <= pivotElement) i++;
        while (arr[j] > pivotElement) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
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
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    QuickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
