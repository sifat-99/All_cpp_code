#include <iostream>
#include <string>
using namespace std;
void selectionSort(string arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j].compare(arr[min_index]) < 0) {
        min_index = j;
      }
    }
    swap(arr[i], arr[min_index]);
  }
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

  selectionSort(arr, n);

  cout << "Sorted strings:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}

