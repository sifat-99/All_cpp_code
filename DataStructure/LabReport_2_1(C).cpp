#include <iostream>
using namespace std;

void basicBubbleSort(int arr[], int n) {
    int passCount = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        passCount++;
    }
    cout << "Pass Count (Basic Bubble Sort): " << passCount << endl;
}

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

void optimizedBubbleSortWithFlag(int arr[], int n) {
    int passCount = 0;
    int i = 0;
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        passCount++;
        i++;
    }
    cout << "Pass Count (Optimized Bubble Sort with Flag): " << passCount << endl;
}

int main() {
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78, 85};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Basic Bubble Sort
    int basicArr[n];
    copy(arr, arr + n, basicArr);
    basicBubbleSort(basicArr, n);
    cout << "Basic Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << basicArr[i] << " ";
    }
    cout << endl;

    // Optimized Bubble Sort
    int optimizedArr[n];
    copy(arr, arr + n, optimizedArr);
    optimizedBubbleSort(optimizedArr, n);
    cout << "Optimized Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << optimizedArr[i] << " ";
    }
    cout << endl;

    // Optimized Bubble Sort with Flag
    int flagArr[n];
    copy(arr, arr + n, flagArr);
    optimizedBubbleSortWithFlag(flagArr, n);
    cout << "Optimized Bubble Sort with Flag: ";
    for (int i = 0; i < n; i++) {
        cout << flagArr[i] << " ";
    }
    cout << endl;

    return 0;
}
