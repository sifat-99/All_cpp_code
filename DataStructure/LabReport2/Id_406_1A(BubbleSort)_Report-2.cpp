#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n, int &swapCount)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
    }
}

int main()
{
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int bubbleSwapCount = 0;
    bubbleSort(arr, n, bubbleSwapCount);
    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Bubble Sort Swap Count: " << bubbleSwapCount << endl;
    return 0;
}
