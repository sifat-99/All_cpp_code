#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right)
{
  int sizeOfLeftSubArray = mid - left + 1;
  int sizeOfRightSubArray = right - mid;

  int LeftArray[sizeOfLeftSubArray + 1];
  int RightArray[sizeOfRightSubArray + 1];

  for (int i = 0; i < sizeOfLeftSubArray; i++)
    LeftArray[i] = arr[left + i];
  for (int j = 0; j < sizeOfRightSubArray; j++)
    RightArray[j] = arr[mid + 1 + j];

  LeftArray[sizeOfLeftSubArray] = INT_MAX;
  RightArray[sizeOfRightSubArray] = INT_MAX;

  int i = 0, j = 0;

  for (int k = left; k <= right; k++)
  {
    if (LeftArray[i] <= RightArray[j])
    {
      arr[k] = LeftArray[i];
      i++;
    }
    else
    {
      arr[k] = RightArray[j];
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
