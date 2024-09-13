#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = low;
  for (int k = low; k < high; k++)
  {
    if (arr[k] < pivot)
    {
      int temp = arr[i];
      arr[i] = arr[k];
      arr[k] = temp;
      i++;
    }
  }
  arr[high] = arr[i];
  arr[i] = pivot;
  return i;
}

void QuickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pi = Partition(arr, low, high);

    QuickSort(arr, low, pi - 1);
    QuickSort(arr, pi + 1, high);
  }
}

int main()
{
  int n;
  cout << "Enter the Size: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  QuickSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}