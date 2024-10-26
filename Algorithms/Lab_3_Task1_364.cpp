#include <bits/stdc++.h>
using namespace std;
int MAX_SIZE = 10000;
void insertionSort(int arr[], int& size, int num) {
    int i = size - 1;
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;
    size++;
}
int Median(int arr[], int& size) {
    int index = (size-1) / 2;
    int median = arr[index];
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return median;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int n;
    while (cin >> n && n != 0) {
        if (n > 0) {
            insertionSort(arr, size, n);
        } else if (n == -1 ) {
            if (size > 0) {
                int median = Median(arr, size);
                cout << median << endl;
            }
            else{
                break;
            }
        }
    }
}
