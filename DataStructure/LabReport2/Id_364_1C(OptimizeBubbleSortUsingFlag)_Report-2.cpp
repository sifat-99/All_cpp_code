#include <iostream>
using namespace std;
void optimizedBubbleSortWithFlag(int arr[], int n) {
    int passCount = 0;
    int i = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
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