#include <bits/stdc++.h>
using namespace std;
int binarySearch(int Array[], int size, int target)
{
  int left = 0;
  int right = size - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (Array[mid] == target)
    {
      return mid;
    }
    else if (Array[mid] < target)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }

  return -1;
}

int main()
{
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  int Array[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> Array[i];
  }

  int targetValue;
  cout << "Enter the target element: ";
  cin >> targetValue;

  int result = binarySearch(Array, n, targetValue);

  if (result != -1)
  {
    cout << "Element found at index " << result << " for code and for theory Index no: " << result + 1 << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }

  return 0;
}
