#include <iostream>
using namespace std;
void selectionSort(int arr[], int n, int &swapCount)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
        swapCount++;
    }
}
int main()
{
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
   int selectionSwapCount = 0;
    selectionSort(arr, n, selectionSwapCount);
    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Selection Sort Swap Count: " << selectionSwapCount << endl;
    return 0;
}
