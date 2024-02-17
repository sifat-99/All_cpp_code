#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int linearSearch(int arr[], int n, int toFind, int& comparisons) {
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i]  == toFind) {
            return arr[i];
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int toFind, int& comparisons) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons++;
        if (arr[mid]  == toFind) {
            return arr[mid];
        } else if (arr[mid] < toFind) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int ID ;
    cin>>ID;


    sort(arr, arr + n);

    int linearComparisons = 0;
    linearSearch(arr, n, ID, linearComparisons);
    cout << "Linear Search:" << endl;
    cout << "Number of comparisons: " << linearComparisons << endl;

    int binaryComparisons = 0;
    binarySearch(arr, n, ID, binaryComparisons);
    cout << "Binary Search:" << endl;
    cout << "Number of comparisons: " << binaryComparisons << endl;

    return 0;
}
