#include <iostream>
using namespace std;

int Partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do {
        while (i <= high && arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
            {
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
    } while (i < j);

    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
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
