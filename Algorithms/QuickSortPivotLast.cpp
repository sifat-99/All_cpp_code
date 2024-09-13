#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;
  int k = low;

  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  arr[high] = arr[k];
  arr[k] = pivot;
  return k;
}

void QuickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivot = Partition(arr, low, high);

    QuickSort(arr, low, pivot - 1);
    QuickSort(arr, pivot + 1, high);
  }
}

int main()
{
  int n;
  cout << "Enter the size: ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  QuickSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
