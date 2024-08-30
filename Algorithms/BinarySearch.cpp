#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1; 
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int target;
  cout << "Enter the target element: ";
  cin >> target;

  int result = binarySearch(arr, target);

  if (result != -1) {
    cout << "Element found at index " << result << endl;
  } else {
    cout << "Element not found" << endl;
  }

  return 0;
}