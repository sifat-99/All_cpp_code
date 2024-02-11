#include <iostream>
using namespace std;
void insertionSort(string arr[], int n) {
  for (int i = 1; i < n; i++) {
    string key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j].compare(key) > 0) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}
int main() {
  int n;
  cout << "Enter the number of strings: ";
  cin >> n;
  string arr[n];
  cout << "Enter the strings:";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  insertionSort(arr, n);
  cout << "Sorted strings:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}

