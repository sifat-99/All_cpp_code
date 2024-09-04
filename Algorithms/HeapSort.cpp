#include <iostream>
using namespace std;

void heapify(int arr[], int n, int root) {
  int largest = root;
  int left = 2 * root + 1;
  int right = 2 * root + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != root) {
    swap(arr[root], arr[largest]);

    heapify(arr, n, largest);
  }
}

void buildHeap(int arr[], int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);
}

void heapSort(int arr[], int n) {
  buildHeap(arr, n);

  for (int i = n - 1; i > 0; i--) {
    swap(arr[0], arr[i]);

    heapify(arr, i, 0);
  }
}

int main() {
  int n;
  cout << "Enter the Size: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Original array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  heapSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  // return 0 after complete execution
  // return 0 after complete execution
  // return 0 after complete execution
  // return 0 after complete execution
  // return 0 after complete execution
  // return 0 after complete execution
  // return 0 after complete execution
  // return 0 after complete execution

  return 0;
}