
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right)
{
  int LeftSize = mid - left + 1;
  int RightSize = right - mid;
  int Left[LeftSize + 1];
  int Right[RightSize + 1];

  for (int i = 0; i < LeftSize; i++)
    Left[i] = arr[left + i];
  for (int j = 0; j < RightSize; j++)
    Right[j] = arr[mid + 1 + j];

  Left[LeftSize] = INT_MAX;
  Right[RightSize] = INT_MAX;

  int i = 0, j = 0;
  for (int k = left; k <= right; k++)
  {
    if (Left[i] <= Right[j])
    {
      arr[k] = Left[i];
      i++;
    }
    else
    {
      arr[k] = Right[j];
      j++;
    }
  }
}

void mergeSort(int arr[], int left, int right)
{
  if (left < right)
  {
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }
}

int main()
{
  int size;
  cout << "Enter the Size of the array: ";
  cin >> size;
  int array[size];
  cout << "Enter the elements: ";
  for (int i = 0; i < size; i++)
    cin >> array[i];

  mergeSort(array, 0, size - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
  return 0;
}





