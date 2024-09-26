#include <iostream>
using namespace std;

const int MAX_SIZE = 10000;  // Maximum size of the array (can be adjusted)

// Function to insert an element into a sorted array
void insertInSortedOrder(int arr[], int& size, int num) {
    int i = size - 1;
    // Shift elements to the right until we find the correct position
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;  // Insert the new number
    size++;  // Increment the size
}

// Function to find and remove the median from the sorted array
int findAndRemoveMedian(int arr[], int& size) {
    int medianIndex = (size - 1) / 2;  // Smaller middle element for even size
    int median = arr[medianIndex];

    // Shift elements to the left to remove the median
    for (int i = medianIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;  // Decrement the size
    return median;
}

int main() {
    int arr[MAX_SIZE];  // Array to store the integers
    int size = 0;  // Current size of the array
    int n;

    // Reading input
    while (cin >> n && n != 0) {
        if (n > 0) {
            // Insert the number in the sorted order
            insertInSortedOrder(arr, size, n);
        } else if (n == -1) {
            // Output and remove the median
            if (size > 0) {
                int median = findAndRemoveMedian(arr, size);
                cout << median << endl;
            }
        }
    }

    return 0;
}
