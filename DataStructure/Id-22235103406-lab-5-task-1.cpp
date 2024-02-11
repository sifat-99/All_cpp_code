#include <iostream>
using namespace std;
void bubbleSort(string arr[], int n) {
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i].compare(arr[i + 1]) > 0) {
        swap(arr[i], arr[i + 1]);
        swapped = true;
      }
    }
  } while (swapped);
}
int main() {
  int n;
  cout << "Enter the number of strings: ";
  cin >> n;

  string arr[n];
  cout << "Enter the strings:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  cout << "Sorted strings:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}

