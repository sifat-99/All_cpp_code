#include <iostream>
using namespace std;
void optimizedBubbleSort(int arr[], int n) {
    int passCount = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        passCount++;
        if (!swapped) {
            break;
        }
    }
    cout << "Pass Count (Optimized Bubble Sort): " << passCount << endl;
}

int main() {
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78, 85};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Optimized Bubble Sort
    int optimizedArr[n];
    copy(arr, arr + n, optimizedArr);
    optimizedBubbleSort(optimizedArr, n);
    cout << "Optimized Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << optimizedArr[i] << " ";
    }
    cout << endl;

   
}