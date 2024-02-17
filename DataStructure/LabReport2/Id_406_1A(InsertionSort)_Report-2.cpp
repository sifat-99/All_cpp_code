#include <iostream>
using namespace std;
void insertionSort(int arr[], int n, int &swapCount)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        swapCount++;
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
   int insertionSwapCount = 0;
    insertionSort(arr, n, insertionSwapCount);
    cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Insertion Sort Swap Count: " << insertionSwapCount << endl;
    return 0;
}
