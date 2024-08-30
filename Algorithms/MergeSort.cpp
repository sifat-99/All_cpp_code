#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right)
{
  int sizeOfLeftSubArray = mid - left + 1;
  int sizeOfRightSubArray = right - mid;

  int LeftArray[sizeOfLeftSubArray], RightArray[sizeOfRightSubArray];

  for (int i = 0; i < sizeOfLeftSubArray; i++)
    LeftArray[i] = arr[left + i];
  for (int j = 0; j < sizeOfRightSubArray; j++)
    RightArray[j] = arr[mid + 1 + j];

  int i = 0, j = 0, k = left;

  while (i < sizeOfLeftSubArray && j < sizeOfRightSubArray)
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
    k++;
  }

  while (i < sizeOfLeftSubArray)
  {
    arr[k] = LeftArray[i];
    i++;
    k++;
  }

  while (j < sizeOfRightSubArray)
  {
    arr[k] = RightArray[j];
    j++;
    k++;
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

  int arr[size];
  cout << "Enter the elements: ";
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}
